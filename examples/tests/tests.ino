#include "flagsapi.h"


/*
    Test
  See what library do
    Components
  Arduino compatible boards;
  Serial monitor on 115200; 
  
    04.05.2022
    Created by WolodiaM.
*/

byte flags = 0xF0;
uint16_t flag = 0xF0F0;

void setup() {
  Serial.begin(115200);
  test1();
  test2();
  test3();
  test4();
}

void test1(){
  Serial.println("      1bit flags test");
  Serial.println("      Writing test");
  Serial.print("byte flags: ");
  Serial.println(flags, BIN);
  Serial.print("int flags: ");
  Serial.println(flag, BIN);
  Serial.println("Write 1 bit to 1 in byte");
  Flag.setBit(flags, 1, 1);
  Serial.println("Write 6 bit to 0 in byte");
  Flag.setBit(flags, 6, 0);
  Serial.println("Write 1 bit to 1 in int");
  Flag.setBit(flag, 1, 1);
  Serial.println("Write 6 bit to 0 in int");
  Flag.setBit(flag, 6, 0);
  Serial.println("Write 8 bit to 1 in int");
  Flag.setBit(flag, 8, 1);
  Serial.println("Write 14 bit to 1 in int");
  Flag.setBit(flag, 14, 0);
  Serial.println("      Writing complete");
  Serial.print("byte flags: ");
  Serial.println(flags, BIN);
  Serial.print("int flags: ");
  Serial.println(flag, BIN);
  Serial.println("      Reading test");
  Serial.print("Bit 7 from byte: ");
  Serial.println(Flag.getBit(flags, 7));
  Serial.print("Bit 2 from byte: ");
  Serial.println(Flag.getBit(flags, 2));
  Serial.print("Bit 6 from int: ");
  Serial.println(Flag.getBit(flag, 6));
  Serial.print("Bit 11 from int: ");
  Serial.println(Flag.getBit(flag, 11));
  Serial.println("      Tests comlete");
}

void test2(){
  Serial.println("      2bit flags test");
  Serial.println("      Writing test");
  Serial.print("byte flags: ");
  Serial.println(flags, BIN);
  Serial.print("int flags: ");
  Serial.println(flag, BIN);
  Serial.println("Write 6,5 bits to 01 in byte");
  Flag.set2Bit(flags, 6, 0x01);
  Serial.println("Write 7,6 bits to 00 in int");
  Flag.set2Bit(flag, 7, 0x00);
  Serial.println("Write 11,10 bits to 11 in int");
  Flag.set2Bit(flag, 11, 0x03);
  Serial.println("      Writing complete");
  Serial.print("byte flags: ");
  Serial.println(flags, BIN);
  Serial.print("int flags: ");
  Serial.println(flag, BIN);
  Serial.println("      Reading test");
  Serial.print("Bits 7,6 from byte: ");
  Serial.println(Flag.get2Bit(flags, 7), BIN);
  Serial.print("Bits 2,1 from byte: ");
  Serial.println(Flag.get2Bit(flags, 2), BIN);
  Serial.print("Bits 6,5 from int: ");
  Serial.println(Flag.get2Bit(flag, 6), BIN);
  Serial.print("Bits 11,10 from int: ");
  Serial.println(Flag.get2Bit(flag, 11), BIN);
  Serial.println("      Tests comlete");
}

void test3(){
  Serial.println("      3bit flags test");
  Serial.println("      Writing test");
  Serial.print("byte flags: ");
  Serial.println(flags, BIN);
  Serial.print("int flags: ");
  Serial.println(flag, BIN);
  Serial.println("Write 2,1,0 bits to 111 in byte");
  Flag.set3Bit(flags, 2, 0x07);
  Serial.println("Write 7,6,5 bits to 000 in int");
  Flag.set3Bit(flag, 7, 0x00);
  Serial.println("Write 11,10,9 bits to 101 in int");
  Flag.set3Bit(flag, 11, 0x05);
  Serial.println("      Writing complete");
  Serial.print("byte flags: ");
  Serial.println(flags, BIN);
  Serial.print("int flags: ");
  Serial.println(flag, BIN);
  Serial.println("      Reading test");
  Serial.print("Bits 4,3,2 from byte: ");
  Serial.println(Flag.get3Bit(flags, 4), BIN);
  Serial.print("Bits 2,1,0 from byte: ");
  Serial.println(Flag.get3Bit(flags, 2), BIN);
  Serial.print("Bits 6,5,4 from int: ");
  Serial.println(Flag.get3Bit(flag, 6), BIN);
  Serial.print("Bits 11,10,9 from int: ");
  Serial.println(Flag.get3Bit(flag, 11), BIN);
  Serial.println("      Tests comlete");
}

void test4(){
  Serial.println("      4bit flags test");
  Serial.println("      Writing test");
  Serial.print("byte flags: ");
  Serial.println(flags, BIN);
  Serial.print("int flags: ");
  Serial.println(flag, BIN);
  Serial.println("Write 5,4,3,2 bits to 1001 in byte");
  Flag.set4Bit(flags, 5, 0x09);
  Serial.println("Write 11,10,9,8 bits to 1010 in int");
  Flag.set4Bit(flag, 11, 0x0A);
  Serial.println("Write 6,5,4,3 bits to 1100 in int");
  Flag.set4Bit(flag, 6, 0x0C);
  Serial.println("      Writing complete");
  Serial.print("byte flags: ");
  Serial.println(flags, BIN);
  Serial.print("int flags: ");
  Serial.println(flag, BIN);
  Serial.println("      Reading test");
  Serial.print("Bits 4,3,2,1 from byte: ");
  Serial.println(Flag.get4Bit(flags, 4), BIN);
  Serial.print("Bits 7,6,5,4 from byte: ");
  Serial.println(Flag.get4Bit(flags, 7), BIN);
  Serial.print("Bits 6,5,4,3 from int: ");
  Serial.println(Flag.get4Bit(flag, 6), BIN);
  Serial.print("Bits 11,10,9,8 from int: ");
  Serial.println(Flag.get4Bit(flag, 11), BIN);
  Serial.println("      Tests comlete");
}

void loop() {}
