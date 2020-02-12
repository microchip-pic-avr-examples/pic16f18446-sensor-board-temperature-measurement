/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.78.1
        Device            :  PIC16F18446
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SDI1 aliases
#define SDI1_TRIS                 TRISBbits.TRISB4
#define SDI1_LAT                  LATBbits.LATB4
#define SDI1_PORT                 PORTBbits.RB4
#define SDI1_WPU                  WPUBbits.WPUB4
#define SDI1_OD                   ODCONBbits.ODCB4
#define SDI1_ANS                  ANSELBbits.ANSB4
#define SDI1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SDI1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SDI1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SDI1_GetValue()           PORTBbits.RB4
#define SDI1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SDI1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SDI1_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SDI1_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SDI1_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SDI1_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SDI1_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define SDI1_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set S2 aliases
#define S2_TRIS                 TRISBbits.TRISB5
#define S2_LAT                  LATBbits.LATB5
#define S2_PORT                 PORTBbits.RB5
#define S2_WPU                  WPUBbits.WPUB5
#define S2_OD                   ODCONBbits.ODCB5
#define S2_ANS                  ANSELBbits.ANSB5
#define S2_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define S2_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define S2_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define S2_GetValue()           PORTBbits.RB5
#define S2_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define S2_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define S2_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define S2_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define S2_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define S2_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define S2_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define S2_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set LCD_RESET aliases
#define LCD_RESET_TRIS                 TRISBbits.TRISB7
#define LCD_RESET_LAT                  LATBbits.LATB7
#define LCD_RESET_PORT                 PORTBbits.RB7
#define LCD_RESET_WPU                  WPUBbits.WPUB7
#define LCD_RESET_OD                   ODCONBbits.ODCB7
#define LCD_RESET_ANS                  ANSELBbits.ANSB7
#define LCD_RESET_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define LCD_RESET_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define LCD_RESET_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define LCD_RESET_GetValue()           PORTBbits.RB7
#define LCD_RESET_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define LCD_RESET_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define LCD_RESET_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define LCD_RESET_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define LCD_RESET_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define LCD_RESET_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define LCD_RESET_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define LCD_RESET_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set SCK1 aliases
#define SCK1_TRIS                 TRISCbits.TRISC1
#define SCK1_LAT                  LATCbits.LATC1
#define SCK1_PORT                 PORTCbits.RC1
#define SCK1_WPU                  WPUCbits.WPUC1
#define SCK1_OD                   ODCONCbits.ODCC1
#define SCK1_ANS                  ANSELCbits.ANSC1
#define SCK1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SCK1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SCK1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SCK1_GetValue()           PORTCbits.RC1
#define SCK1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SCK1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SCK1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SCK1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SCK1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SCK1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SCK1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SCK1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LCD_BACKLIGHT aliases
#define LCD_BACKLIGHT_TRIS                 TRISCbits.TRISC2
#define LCD_BACKLIGHT_LAT                  LATCbits.LATC2
#define LCD_BACKLIGHT_PORT                 PORTCbits.RC2
#define LCD_BACKLIGHT_WPU                  WPUCbits.WPUC2
#define LCD_BACKLIGHT_OD                   ODCONCbits.ODCC2
#define LCD_BACKLIGHT_ANS                  ANSELCbits.ANSC2
#define LCD_BACKLIGHT_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LCD_BACKLIGHT_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LCD_BACKLIGHT_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LCD_BACKLIGHT_GetValue()           PORTCbits.RC2
#define LCD_BACKLIGHT_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LCD_BACKLIGHT_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LCD_BACKLIGHT_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LCD_BACKLIGHT_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LCD_BACKLIGHT_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LCD_BACKLIGHT_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LCD_BACKLIGHT_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LCD_BACKLIGHT_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set channel_Temperature aliases
#define channel_Temperature_TRIS                 TRISCbits.TRISC3
#define channel_Temperature_LAT                  LATCbits.LATC3
#define channel_Temperature_PORT                 PORTCbits.RC3
#define channel_Temperature_WPU                  WPUCbits.WPUC3
#define channel_Temperature_OD                   ODCONCbits.ODCC3
#define channel_Temperature_ANS                  ANSELCbits.ANSC3
#define channel_Temperature_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define channel_Temperature_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define channel_Temperature_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define channel_Temperature_GetValue()           PORTCbits.RC3
#define channel_Temperature_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define channel_Temperature_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define channel_Temperature_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define channel_Temperature_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define channel_Temperature_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define channel_Temperature_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define channel_Temperature_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define channel_Temperature_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set S3 aliases
#define S3_TRIS                 TRISCbits.TRISC4
#define S3_LAT                  LATCbits.LATC4
#define S3_PORT                 PORTCbits.RC4
#define S3_WPU                  WPUCbits.WPUC4
#define S3_OD                   ODCONCbits.ODCC4
#define S3_ANS                  ANSELCbits.ANSC4
#define S3_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define S3_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define S3_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define S3_GetValue()           PORTCbits.RC4
#define S3_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define S3_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define S3_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define S3_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define S3_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define S3_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define S3_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define S3_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set LCD_CS aliases
#define LCD_CS_TRIS                 TRISCbits.TRISC7
#define LCD_CS_LAT                  LATCbits.LATC7
#define LCD_CS_PORT                 PORTCbits.RC7
#define LCD_CS_WPU                  WPUCbits.WPUC7
#define LCD_CS_OD                   ODCONCbits.ODCC7
#define LCD_CS_ANS                  ANSELCbits.ANSC7
#define LCD_CS_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LCD_CS_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LCD_CS_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LCD_CS_GetValue()           PORTCbits.RC7
#define LCD_CS_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LCD_CS_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LCD_CS_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define LCD_CS_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define LCD_CS_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define LCD_CS_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define LCD_CS_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LCD_CS_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF5 pin functionality
 * @Example
    IOCBF5_ISR();
 */
void IOCBF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF5_SetInterruptHandler() method.
    This handler is called every time the IOCBF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(IOCBF5_InterruptHandler);

*/
extern void (*IOCBF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF5_SetInterruptHandler() method.
    This handler is called every time the IOCBF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(IOCBF5_DefaultInterruptHandler);

*/
void IOCBF5_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF4 pin functionality
 * @Example
    IOCCF4_ISR();
 */
void IOCCF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF4_SetInterruptHandler() method.
    This handler is called every time the IOCCF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF4_SetInterruptHandler(IOCCF4_InterruptHandler);

*/
extern void (*IOCCF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF4_SetInterruptHandler() method.
    This handler is called every time the IOCCF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF4_SetInterruptHandler(IOCCF4_DefaultInterruptHandler);

*/
void IOCCF4_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/