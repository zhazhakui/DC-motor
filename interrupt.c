#include"interrput.h"
#include"time.h"
unsigned int percent=0;
unsigned int target=5;

void Timer0() interrupt 1 using 0
{
	percent += 1;
	if(percent == 10)//���ߵ�ƽ�����ţ���ά��100hz��Ƶ��
	{
		percent = 0;
		pwm1 = 1;
	}
	if(percent == target)//����ռ�ձȣ������ٶ�
	{
		pwm1 = 0;
	}
	Timer0Initial();
}

