/*
 * File:   temperature.c
 * Author: M19219
 *
 * Created on December 4, 2017, 2:23 PM
 */

#include "temperature.h"

int32_t temp10bit, temp12bit;
int32_t temp10bitOffset, temp12bitOffset;



void readTemperature() {   
    uint32_t res;
    uint16_t i;
    
    ADREF = 0x03; // ADNREF VSS; ADPREF FVR
    
    
    res = 0;
    for(i=0; i<32; i++) {
        ADCC_GetSingleConversion(channel_Temperature); 
        res += (ADCC_GetAccumulatorValue() >> 6);
    }
    
    res = res >> 5;
    
    temp10bit = (res & 0xFFFFFFFC) - 1600;
    temp10bit *= 100;
    temp10bit /= 78;
    
    temp12bit =  res               - 1600; 
    temp12bit *= 100;
    temp12bit /= 78;
}


void drawTemperature(uint8_t x, uint8_t y, uint16_t color) {
    
    uint8_t st[16];
    
    st[ 0] = ((temp12bit/1000)%10) + '0';
    st[ 1] = ((temp12bit/100)%10) + '0';
    st[ 2] = '.';
    st[ 3] = ((temp12bit/10)%10) + '0';  
    st[ 4] = ((temp12bit/1)%10) + '0';
    st[ 5] = 0;  
  
    if(temp12bit<1000) {
        st[0] = ' ';
    }
  
    GFX_DrawText(x, y, st, color, 0x0000); 
    GFX_DrawCircle(x+43, y+2, 2, 0xFF00);
    GFX_DrawText(x+48, y, "C", color, 0x0000);
 
}


void initTemperature() {
    clearPlot(&plot1, 64);
    clearPlot(&plot2, 64);
    
    readTemperature();
    
    temp10bitOffset = temp10bit;
    temp12bitOffset = temp12bit;
}


void drawTemperaturePlots(uint8_t x, uint8_t y, uint16_t color) {
    
    int32_t v;
    
    v = 64 + (temp12bit - temp12bitOffset)*5;
    
    if(v<0) v = 0;
    if(v>255) v = 255;
    
    addToPlot(&plot1, (uint8_t)v);           
    drawPlot(&plot1, x, y, 65, color);
    
    
    v = 64 + (temp10bit - temp10bitOffset)*5;
    
    if(v<0) v = 0;
    if(v>255) v = 255;
    
    addToPlot(&plot2, (uint8_t)v);           
    drawPlot(&plot2, x, y+65, 65, color);
}



void temperatureScreenTasks() {

    readTemperature();
    
    GFX_DrawText(0, 0, "Temperature", 0xFF00, 0x0000);
    drawTemperature(15, 15, 0xFF00);
    drawTemperaturePlots(0, 30, 0xFF00);
}
