/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RB4 aliases
#define S3_TRIS                 TRISBbits.TRISB4
#define S3_LAT                  LATBbits.LATB4
#define S3_PORT                 PORTBbits.RB4
#define S3_WPU                  WPUBbits.WPUB4
#define S3_OD                   ODCONBbits.ODCB4
#define S3_ANS                  ANSELBbits.ANSB4
#define S3_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define S3_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define S3_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define S3_GetValue()           PORTBbits.RB4
#define S3_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define S3_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define S3_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define S3_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define S3_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define S3_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define S3_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define S3_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
#define RB4_SetInterruptHandler  S3_SetInterruptHandler
// get/set IO_RB5 aliases
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
#define RB5_SetInterruptHandler  S2_SetInterruptHandler
// get/set IO_RB7 aliases
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
// get/set IO_RC1 aliases
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
// get/set IO_RC2 aliases
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
// get/set IO_RC3 aliases
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
// get/set IO_RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
// get/set IO_RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODCC5
#define IO_RC5_ANS                  ANSELCbits.ANSC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)
// get/set IO_RC6 aliases
#define IO_RC6_TRIS                 TRISCbits.TRISC6
#define IO_RC6_LAT                  LATCbits.LATC6
#define IO_RC6_PORT                 PORTCbits.RC6
#define IO_RC6_WPU                  WPUCbits.WPUC6
#define IO_RC6_OD                   ODCONCbits.ODCC6
#define IO_RC6_ANS                  ANSELCbits.ANSC6
#define IO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_GetValue()           PORTCbits.RC6
#define IO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_RC6_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_RC6_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO_RC6_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO_RC6_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define IO_RC6_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)
// get/set IO_RC7 aliases
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
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the S3 pin functionality
 * @param none
 * @return none
 */
void S3_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for S3 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for S3 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void S3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for S3 pin.
 *        This is a dynamic interrupt handler to be used together with the S3_SetInterruptHandler() method.
 *        This handler is called every time the S3 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*S3_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for S3 pin. 
 *        This is a predefined interrupt handler to be used together with the S3_SetInterruptHandler() method.
 *        This handler is called every time the S3 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void S3_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the S2 pin functionality
 * @param none
 * @return none
 */
void S2_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for S2 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for S2 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void S2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for S2 pin.
 *        This is a dynamic interrupt handler to be used together with the S2_SetInterruptHandler() method.
 *        This handler is called every time the S2 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*S2_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for S2 pin. 
 *        This is a predefined interrupt handler to be used together with the S2_SetInterruptHandler() method.
 *        This handler is called every time the S2 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void S2_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/