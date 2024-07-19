# Hand motion recognition demonstration using ToF sensor

## Description
This project is a demonstration of hand motion recognition using VL53L8 ToF sensors and X-CUBE-AI.  
The projects referenced in the production are [STM32 Model Zoo's handposture](https://github.com/STMicroelectronics/stm32ai-modelzoo) and [STSW-IMG035_F401 Gesture sample code](https://www.st.com/en/embedded-software/stsw-img035.html).  
Development targets are stm32F769i disco board Nucleo F401RF board and X-NUCLEO-53LxA1 board.    

![ToF Sensor1](https://github.com/user-attachments/assets/85e90bd6-307d-4faf-9c10-9f92bffb8918)  

The Nucleo F401RF, connected to the X-NUCLEO-53LxA1 board, receives VL53L8 ToF sensor data and recognizes hand motions through CNN model processing using X-CUBE-AI and the GesturesMZ library in the Gestures sample code.  
Processed hand motion values are transmitted to the STM32F769I-DISCO board via Uart communication, and the results are displayed via GUI.  
There are three menus in the GUI.  
1. Recognizes the shape of the hand  
2. Recognizes hand height and height  
3. Recognizes the position of the hand

The GUI is built with Touchgfx, and you can move the menu with the touch of the screen.

**--Version--**  
STM32CUBE F7 v1.17.2  
STM32CUBE MX 6.11.1 
STM32CUBE IDE 1.15.1  
X-CUBE-AI 9.0.0
TouchGFX 4.24

## Project Structure
```
STM32_AI_Handwrite
├─ .ai
├─ .cproject
├─ .gitignore
├─ .mxproject
├─ .project -----------------------------> Main project file
├─ BSP ----------------------------------> BSP for LCD and touch screen use
│  ├─ Components
│  │  ├─ nt35510
│  │  ├─ otm8009a
│  │  └─ ts.h
│  ├─ stm32f769i_discovery.c
│  ├─ stm32f769i_discovery.h
│  ├─ stm32f769i_discovery_lcd.c
│  ├─ stm32f769i_discovery_lcd.h
│  ├─ stm32f769i_discovery_sdram.c
│  ├─ stm32f769i_discovery_sdram.h
│  ├─ stm32f769i_discovery_ts.c
│  └─ stm32f769i_discovery_ts.h
├─ Core --------------------------------> Main application code
│  ├─ Inc
│  ├─ Src
│  └─ Startup
├─ Drivers -----------------------------> HAL Driver
│  ├─ CMSIS
│  └─ STM32F7xx_HAL_Driver
├─ HandWriteNumber.tflite --------------> Model converted to TensorFlow Lite
├─ Hand_Write_Number.ipynb -------------> My CNN model code (Jupyter Notebook)
├─ Middlewares
│  └─ ST
│     └─ AI ----------------------------> X-CUBE-AI middleware package
├─ Number_Check.ioc --------------------> CubeMX .ioc File
├─ Number_Check.launch
├─ README.md
├─ STM32F769NIHX_FLASH.ld
├─ STM32F769NIHX_RAM.ld
├─ X-CUBE-AI ---------------------------> X-CUBE-AI generate file
└─ best-HandWriteNumber.h5 
```

## AI Model Information  

**1. Training Dataset**  
Training dataset is TensorFlow's MNIST handwritten digit data set,28x28.  
(ref. https://www.tensorflow.org/datasets/catalog/mnist)  

  
**2. Model Layer** 
```
intput shape = 28, 28, 1
_________________________________________________________________
 Layer (type)                Output Shape              Param #   
=================================================================
 conv2d_10 (Conv2D)          (None, 28, 28, 32)        320       
                                                                 
 max_pooling2d_10 (MaxPoolin  (None, 14, 14, 32)       0         
 g2D)                                                            
                                                                 
 conv2d_11 (Conv2D)          (None, 14, 14, 64)        18496     
                                                                 
 max_pooling2d_11 (MaxPoolin  (None, 7, 7, 64)         0         
 g2D)                                                            
                                                                 
 flatten_5 (Flatten)         (None, 3136)              0         
                                                                 
 dense_12 (Dense)            (None, 100)               313700    
                                                                 
 dropout_7 (Dropout)         (None, 100)               0         
                                                                 
 dense_13 (Dense)            (None, 10)                1010      
                                                                 
=================================================================
Total params: 333,526
Trainable params: 333,526
Non-trainable params: 0
```

**3. Loss Graph**  
![image](https://github.com/user-attachments/assets/8869ef46-2a5e-41eb-aa31-53d2d3d1a0c9)  

## How to run
1. Execute the .project file for add the project to the CubeIDE  
(Merging may be necessary due to differences in program versions.)
3. Build project. (Target: stm32F769i disco board)
4. Connect the target board and RUN it.
5. When the program runs normally, draw a number and press the Run button on the screen to predict the value.  
and Pressing the Clear button, screen and results will be clear

## Preview

https://github.com/user-attachments/assets/13894ae9-26f5-4428-852e-e9b77f4bee48  

## Issue
1. Learning about the number 6 is a bit lacking. :worried:
2. This project is intended for personal study and may be of low quality. :worried::worried:




