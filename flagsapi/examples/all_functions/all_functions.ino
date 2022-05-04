#include "flagsapi.h"  //inluding library

/*
    All functions
  Explain all functions of  the library
    Components
  Arduino compatible boards;
  
    04.05.2022
    Created by WolodiaM.
*/

uint8_t flags = 0x00; //init variables
uint16_t flag = 0x000;

void setup() {
  Serial.begin(115200);
  Flag.setBit(flags, 5, 0x01);  //Set 5 bit to 1.
  Flag.set2Bit(flag, 6, 0x03);  //Set 6 and 5 bits to 11.
  Flag.set3Bit(flags, 7, 0x07); //Set 7, 6 and 5 bits to 111.
  Flag.set4Bit(flag, 11, 0x0F); //Set 11, 10, 9 and 8 bits to 1111.
  Flag.getBit(flags, 5);        //Read 5 bit.
  Flag.get2Bit(flag, 11);       //Read 11, 10 bits.
  Flag.get3Bit(flags, 2);       //Read 2, 1, 0 bits.
  Flag.get4Bit(flag, 15);       //Read 15, 14, 13, 12 bits.
}

void loop() {}
