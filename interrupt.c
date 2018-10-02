#include"interrput.h"
#include"time.h"
unsigned int percent=0;
unsigned int target=5;

void Timer0() interrupt 1 using 0
{
	percent += 1;
	if(percent == 10)//拉高电平的引脚，来维持100hz的频率
	{
		percent = 0;
		pwm1 = 1;
	}
	if(percent == target)//调节占空比，调节速度
	{
		pwm1 = 0;
	}
	Timer0Initial();
}

