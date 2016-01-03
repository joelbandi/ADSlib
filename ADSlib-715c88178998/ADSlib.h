#ifndef MBED_ADSlib_H
#define MBED_ADSlib_H

//Word definition begin here
#define WAKEUP 0x02
#define STANDBY 0x04
#define RESET 0x06
#define START 0x08
#define STOP 0x0A
#define RDATAC 0x10
#define SDATAC 0x11
#define WCT_setting_regAdress 0x18
#define W_CONFIG1 0x41
#define W_CONFIG3 0x43
#define W_CHnSET 0x45


/*-----------------------------*/





//Function declarations start here
void pause_clk(int k);
void pause_sclk(int k);
//////////////////////////////////////

// data variables start here//
extern signed char ADS_Default_Channel_Settings [8];
//extern unsigned char Input_dummy_byte [19];
extern unsigned char ADS_Default_Register_Settings [22];

#endif