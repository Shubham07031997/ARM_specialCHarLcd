#include<lpc214x.h>
#include<lcdarm.h>
void c1()
{
   LCD_Command1(0x40); //0th data

   LCD_Data(0x00000000);
   LCD_Data(0x00000000);
   LCD_Data(0x0000001E);
   LCD_Data(0x00000007);
   LCD_Data(0x0000001E);
   LCD_Data(0x00000000);
   LCD_Data(0x00000000);
   LCD_Data(0x00000000);
}
int main()
{
   PINSEL0=0x00000000;
   PINSEL1=0x00000000;
   IODIR0=0xffffffff;
   LCD_Init();
   c1();
   while(1)
   {
       
	   LCD_Command1(0x80);
	   LCD_Data(0);
}	   	}
