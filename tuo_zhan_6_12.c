#include<reg51.h>
sbit p_out=P1^0;
/*定时器T1初始化程序*/
void timer()
	{
	 TMOD=0x25;/*T1计时方式2,T0计数方式1*/
	 TH0=0xFF;
	 TL0=0xFF;/*定时器赋初值*/
	 TH1=6;
	 TL1=6;/*计数器赋初值*/
	 IE=0x8A;/*打开中断*/
	 TR0=1;/*启动计数器T0*/
	}
void t0_int() interrupt 1
	{
	 TR0=0;
	 TR1=1;
	}
void t1_int() interrupt 3
	{
	 p_out=~p_out;
	}
main()
	{
	 timer();
	 while(1);
	
	}

