<div id="readme" class="Box-body readme blob js-code-block-container">
  <article class="markdown-body entry-content p-3 p-md-6" itemprop="text"><p><a href="https://www.microchip.com" rel="nofollow"><img src="https://camo.githubusercontent.com/5fb5505f69a28ff407841612dfe2b7004f210594/68747470733a2f2f636c6475702e636f6d2f553071684c7742696a462e706e67" alt="MCHP" data-canonical-src="https://cldup.com/U0qhLwBijF.png" style="max-width:100%;"></a></p>


# Introduction
The PIC16F184xx family has a new Analog to Digital Converter with Computation (ADCC) with a 12-bit resolution. This project shows the reading of an analog temperature sensor (MCP9701) using the ADCC.

# Description
In this example we will be using the PIC16F18446 Sensor Board. The PIC reads the temperature sensor, and displays the temperature on the LCD. The sensor has a temperature coefficient of 19.5 mV/°C. It is sensitive enough to detect the heat of the user's hand from a distance of 1 cm. Here is a picture of the temperature sensor:

![Temperature Sensor](image/Temperature_Sensor.jpg)

The current temperature is displayed (in Celsius) on the LCD. Also, two graphs display the variations of the 12-bit and 10-bit temperature values in real time.

![Temperature_GUI](image/Temperature_GUI.jpg)

# MCC Settings

Here are the settings used for MSSP, CLC, FVR, and ADCC. MSSP + CLC are used for the LCD control.
### MSSP Settings
![MSSP Settings](image/MSSP1.png)

### CCL Settings
![CCL1 Settings](image/CLC1.png)

![CCL2 Settings](image/CLC2.png)

### FVR Settings
![FVR Settings](image/VREF.png)

### ADCC settings
![ADCC Settings](image/ADCC.png)

![ADCC Registers](image/ADCC_Registers.png)

### PIN Grid
![PIN Grid](image/PIN_Grid.png)

### PIN Module
![PIN Module](image/PIN_Module.png)
