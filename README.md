# Hand motion recognition demonstration using ToF sensor

## Description
This project is a demonstration of hand posture, motion recognition using VL53L8 ToF sensors and X-CUBE-AI.  
The projects referenced in the production are [STM32 Model Zoo's handposture](https://github.com/STMicroelectronics/stm32ai-modelzoo) and [STSW-IMG035_F401 Gesture sample code](https://www.st.com/en/embedded-software/stsw-img035.html).  

Development targets are stm32F769i disco board Nucleo F401RF board and X-NUCLEO-53L8A1 board.    

![ToF Sensor1](https://github.com/user-attachments/assets/85e90bd6-307d-4faf-9c10-9f92bffb8918)  

Nucleo F401RE connected to the X-NUCLEO-53L8A1 board, receives VL53L8 ToF sensor data and recognizes hand posture, motions through CNN model processing using X-CUBE-AI and the GesturesMZ library in the Gestures sample code.  
Processed hand motion values are transmitted to the STM32F769I-DISCO board via Uart com, and results are displayed GUI.  

There are three menus in the GUI.  
1. Recognizes the posture of the hand(Using X-CUBE-AI)    
2. Recognizes hand height and heigh(Using GesturesMZ lib)  
3. Recognizes the position of the hand(Using GesturesMZ lib)  

The GUI is built with Touchgfx, and you can move the menu with the touch of the screen.


**--Version--**  
STM32CUBE F7 v1.17.2  
STM32CUBE MX 6.11.1  
STM32CUBE IDE 1.15.1  
X-CUBE-AI 9.0.0  
TouchGFX 4.24  

## Project Structure
```
STM32_AI_HandPosture_Demo

├─ NucleoF401
│  ├─ .ai
│  ├─ .cproject
│  ├─ .mxproject
│  ├─ .project -------------------------------------------> Project file
│  ├─ .settings
│  ├─ CNN2D_ST_HandPosture_8classes.h5 -------------------> STM32 Model Zoo CNN Model 
│  ├─ Core -----------------------------------------------> Main App
│  │  ├─ Inc 
│  │  └─ Src
│  ├─ Drivers --------------------------------------------> BSP, HAL Driver
│  │  ├─ BSP
│  │  │  ├─ Components
│  │  │  │  └─ VL53LMZ -----------------------------------> VL53LX ToF BSP
│  │  │  ├─ platform.c
│  │  │  └─ platform.h
│  │  ├─ CMSIS
│  │  └─ STM32F4xx_HAL_Driver
│  ├─ GesturesMZ -----------------------------------------> GestureMZ lib
│  ├─ HandPosture_Demo_F4 Debug.launch
│  ├─ HandPosture_Demo_F4.ioc ----------------------------> CubeMX .ioc file
│  ├─ Middlewares
│  │  └─ ST
│  │     └─ AI -------------------------------------------> X-CUBE-AI middleware
│  ├─ STM32F401RETX_FLASH.ld
│  ├─ STM32F401RETX_RAM.ld
│  ├─ X-CUBE-AI
│  └─ startup
├─ README.md
==================================================================================
├─ STM32F769I_DISCO
├─ .extSettings
├─ .mxproject
├─ Core -------------------------------------------------> Main App
│  ├─ Inc
│  └─ Src
├─ Drivers ----------------------------------------------> BSP, HAL Driver
│  ├─ BSP
│  │  └─ Components
│  │     ├─ Common
│  │     ├─ ft6x06
│  │     ├─ mx25l512
│  │     └─ otm8009a
│  ├─ CMSIS
│  └─ STM32F7xx_HAL_Driver
├─ HandPosture_Demo_F7.ioc ----------------------------> CubeMX .ioc file
├─ LIBJPEG
├─ Middlewares
│  ├─ ST
│  │  └─ touchgfx -------------------------------------> TouchGFX middleware
│  └─ Third_Party
│     ├─ FreeRTOS
│     └─ LibJPEG
├─ STM32CubeIDE
│  ├─ .cproject
│  ├─ .project -----------------------------------------> Project file
│  ├─ .settings
│  ├─ Application -----------------------> Empty dir, Use as a project link
│  ├─ Drivers ---------------------------> Empty dir, Use as a project link
│  ├─ HandPosture_Demo_F7 Debug.launch
│  ├─ Middlewares -----------------------> Empty dir, Use as a project link
│  ├─ STM32F769I_DISCO.launch
│  ├─ STM32F769NIHX_FLASH.ld
│  └─ STM32F769NIHX_RAM.ld
├─ TouchGFX
│  ├─ App
│  ├─ ApplicationTemplate.touchgfx.part
│  ├─ HandPosture_Demo.touchgfx -------------------------> TouchGFX designer file
│  ├─ MATERIAL-ICONS-LICENSE
│  ├─ application.config
│  ├─ assets --------------------------------------------> GUI image and fonts
│  ├─ build
│  ├─ config
│  ├─ generated -----------------------------------------> File generated by TouchGFX designer
│  │  ├─ gui_generated
│  │  ├─ images
│  │  ├─ simulator
│  │  ├─ texts
│  │  └─ videos
│  ├─ gui -----------------------------------------------> GUI App code
│  │  ├─ include
│  │  └─ src
│  ├─ simulator
│  ├─ target.config
│  └─ target
├─ changelog.txt
└─ readme.md
```
## AI Model Information  

AI model uses a pre-trained CNN 2D model in STM32 Model Zoo.  
(ref. https://github.com/STMicroelectronics/stm32ai-modelzoo/tree/main/hand_posture)  

## How to run
1. Run the .project file in the F401RE and F769I folders to add a project to the CubeIDE.  
(Merging may be necessary due to differences in program versions.)
3. Build project. (Target: Nucleo-F401RE, STM32F769i disco board)
4. Connect the target board and RUN it.
5. Connect the X-NUCLEO-53L8A1 board to the Nucleo-F401RE and connect the UART line to the STM32F769I DISCO board as shown in the picture below.  
   
![F4_Pin](https://github.com/user-attachments/assets/ab5bde20-48dc-4217-b75f-0a700b753350)  
![F7_Pin](https://github.com/user-attachments/assets/b82c1d54-a73f-4923-bf77-7ce89ec6fc34)  

7. Press the desired menu in the GUI to move the screen, then detect the hand gesture on the sensor, and the result is output.


## Menu Preview







## Issue
1. Due to the fast sensor operation speed, communication loss between boards occurs occasionally.
2. This project is intended for personal study and may be of low quality. :worried::worried:




