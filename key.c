#include"key.h"
#include"time.h"

extern unsigned int target;

void keyscan() //����������
{	
	if(key1 == 0)
	{
    	delay(3);
	    if(key1 == 0)//����
    	{
	    	target -= 1;
		    if(target==1)
		         target=9;		
		    while(!key1);
    	}

	}

	if(key2 == 0) //����
	{
		delay(3);
		if(key2 == 0)
		{
	    	target += 2;
			if(target==9)
			        target=1;
			while(!key2);
		}								
	}	
	if(key3 == 0)//��ת
	{
        	delay(3);				  
        	if(key3 == 0)
        	{
        		input1 = ~input1;
        		input2 = ~input2;
        		while(!key3);
         	}
	}
}

 

 void initial()

{

	key1 = 1;
	key2 = 1;
    key3 = 1;
	P1 = 0xff;
	input1 = 0;
	input2 = 1;
	initial_Timer();

}
