# NYU-6463Processor

**OBJECTIVES**

We implemented the NYU-6463 Processor which has three instruction types: (a) R-Type for arithmetic instructions, (b) I-Type for immediate value operations, load and store instructions, and (c) J-Type for jump instructions. 

**IMPLEMENTATION**

Place 3 components in different parts of instruction memory: (key expansion from 0-99, encryption 100-199, decryption from 200-299) 

Change PC component in our MIPS CPU, and add key_in, enc and dec signals to control RC5 respectively. 

Since generally mips processor will run the whole instruction memory without stopping when it finishes running key expansion, encryption or decryption 

We add a state machine to let processor stop running when PC finishes running any of these components. When processor finishes running one part, it goes to IDLE state and wait for a signal to go to RUNNING state 

We can also accept input of din and ukey value. Din is directly stored into register file, where $1 stores A and $2 stores B, and ukey is stored into data memory. 

When you finish running key expansion, the generated S array is stored into data memory, subsequently encryption and decryption can use these values in data memory and din in register file to generate the final result which is then stored in register $1 and $2 

Switch(5 downto 0) to control which register and data in data memory to show. Since there are totally 64 different data(32 registers and 32 data addresses) 

Key_in is to control start key expansion, enc and dec switch is to control start doing encryption or decryption 

Din_control is to control confirm the input of din, which is current value of switch. If you press once, it will set the lower 16 bits of din, if you press again, it will set the next 16 bits and so on so forth. 

Ukey_control is similar with din control button. 

ChangeAdd button is to confirm the instruction address where the instruction you want to change is. The input is also the current value of 16 switches 

Changecommitbutton is to set the instruction in the address which is set by changeAdd to a new instruction based on what the current value the switches are. 

Single button is to control whether it is in single instruction stepping mode or complete program running state. 

**Block Diagram:**

![WechatIMG2](https://github.com/Qimingxingxing/NYU6463-Processor/blob/master/block.jpeg)

**GROUP MEMBER**

Qiming Zhang(qz718), Xiaojie Zha(xz1776), Wenzhu Zhao(wz916), Gaotian Tang(gt960), Yuhan Zhang(yz2903) 


