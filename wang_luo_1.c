#include<reg51.h>

void delay(void)//循环间隔时间

{

    unsigned char m,n,s;

	for(m=20;m>0;m--)

	{

	    for(n=20;n>0;n--)

		{ for(s=248;s>0;s--);}

		}

	}

     

main()

  { 

	    unsigned char i,a,b,temp;

	 while(1)

	  {

	            temp=0xfe;

              	P0=temp;

	            delay();

           

               		 

    

	    for(i=1;i<8;i++)

	      {

	  		 a=temp<<i;

	 		 b=temp>>(8-i);

	 		 P0=a|b;

	  		 delay();

	 	  }	 //从左往右循环

	 

	 }

 }