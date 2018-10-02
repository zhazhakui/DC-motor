#ifndef _KEY_H_
#define _KEY_H_

#include<reg52.h>

sbit key1 = P2^0;
sbit key2 = P2^1;  //¶ÀÁ¢°´¼üÒı½Å
sbit key3 = P2^2;
sbit input1 = P0^0;
sbit input2 = P0^1;  
void keyscan();
void initial();
#endif