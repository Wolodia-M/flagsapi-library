/*
 * setBit and getBit - 0-7/0-15, number of the position of bit, like binary position number.
 * set2Bit and get2Bit - 0-7/0-15, number of the last position of 2 bits, like binary position number.
 * set3Bit and get3Bit - 0-7/0-15, number of the last position of 3 bits, like binary position number.
 * set4Bit and get4Bit - 0-7/0-15, number of the last position of 4 bits, like binary position number.
 * setBit - max input number = 0x01;
 * set2Bit  - max input number = 0x03;
 * set3Bit - max input number = 0x07;
 * set4Bit - max input number = 0x0F;
 * 
 * Smal library that allo pack 1, 2, 3 or 4 bits in uint8_t(byte) or in uint16_t(unssigned int).
 * Library createed by WolodiaM.
 */
#ifndef flagsapi_H
#define flagsapi_H

#include <Arduino.h>

class flagsapi{
  public:
    void setBit(uint8_t &val, int pointer, int set){
      val = val & ~(0x01 << pointer);
      val = val | set << pointer;
    }
    void setBit(uint16_t &val, int pointer, int set){
      val = val & ~(0x0001 << pointer);
      val = val | set << pointer;
    }
    void set2Bit(uint8_t &val, int pointer, int set){
      val = val & ~(0x03 << pointer - 1);
      val = val | set << pointer - 1;
    }
    void set2Bit(uint16_t &val, int pointer, int set){
      val = val & ~(0x0003 << pointer - 1);
      val = val | set << pointer - 1;
    }
    void set3Bit(uint8_t &val, int pointer, int set){
      val = val & ~(0x07 << pointer - 2);
      val = val | set << pointer - 2;
    }
    void set3Bit(uint16_t &val, int pointer, int set){
      val = val & ~(0x0007 << pointer - 2);
      val = val | set << pointer - 2;
    }
    void set4Bit(uint8_t &val, int pointer, int set){
      val = val & ~(0x0F << pointer - 3);
      val = val | set << pointer - 3;
    }
    void set4Bit(uint16_t &val, int pointer, int set){
      val = val & ~(0x000F << pointer - 3);
      val = val | set << pointer - 3;
    }
    bool getBit(uint8_t &val, int pointer){
      return (val >> pointer) & 0x01;
    }
    bool getBit(uint16_t &val, int pointer){
       return (val >> pointer) & 0x0001;
    }
    uint8_t get2Bit(uint8_t &val, int pointer){
      return (val >> pointer - 1) & 0x03;
    }
    uint8_t get2Bit(uint16_t &val, int pointer){
      return (val >> pointer - 1) & 0x0003;
    }
    uint8_t get3Bit(uint8_t &val, int pointer){
      return (val >> pointer - 2) & 0x07;
    }
    uint8_t get3Bit(uint16_t &val, int pointer){
      return (val >> pointer - 2) & 0x0007;
    }
    uint8_t get4Bit(uint8_t &val, int pointer){
      return (val >> pointer - 3) & 0x0F;
    }
    uint8_t get4Bit(uint16_t &val, int pointer){
      return (val >> pointer - 3) & 0x000F;
    }
  private:
};

extern flagsapi Flag;

#endif
