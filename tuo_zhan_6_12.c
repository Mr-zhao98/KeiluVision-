#include<reg51.h>
sbit p_out=P1^0;
/*��ʱ��T1��ʼ������*/
void timer()
	{
	 TMOD=0x25;/*T1��ʱ��ʽ2,T0������ʽ1*/
	 TH0=0xFF;
	 TL0=0xFF;/*��ʱ������ֵ*/
	 TH1=6;
	 TL1=6;/*����������ֵ*/
	 IE=0x8A;/*���ж�*/
	 TR0=1;/*����������T0*/
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

