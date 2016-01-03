#include "ADSlib/ADSlib.h"
#include "mbed.h"

unsigned char ADS_Default_Register_Settings [22] = 
{
  0x64, // Config1
  0x20, // Config2
  0xC0, // Config3
  0x00, // loff
  0x60, // ch1set
  0x60, // ch2set
  0x60, // ch3set
  0x60, // ch4set
  0x60, // ch5set
  0x60, // ch6set
  0x60, // ch7set
  0x60, // ch8set
  0x00, // rld_sensp
  0x00, // rld_sensm
  0x00, // loff_sensp
  0x00, // loff_sensm
  0x00, // loff_flip
  0x00, // gpio
  0x00, // pace
  0x00, // reserved
  0x00  // config4
};
/**************************************************************************/

signed char ADS_Default_Channel_Settings [8] = 
{
  0x60, // ch1set
  0x60, // ch2set
  0x60, // ch3set
  0x60, // ch4set
  0x60, // ch5set
  0x60, // ch6set
  0x60, // ch7set
  0x60  // ch8set
  
};

/*****************************************************************************/

void pause_clk(int k){
     k=k/2;
     wait_us(k);
}

void pause_sclk(int k){
    wait_us(k);
}
    
