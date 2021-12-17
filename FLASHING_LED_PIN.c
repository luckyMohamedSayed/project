#include<reg52.H>
sbit LED_PIN =P1^5;
bit LED_state;
void LED_Init();
void changing_state();
void DELAY_wait();

void main (void)
{
LED_Init();
while(1)
{
changing_state();
DELAY_wait(1000);
}
}
void LED_Init()
{
LED_state=0;
}
void changing_state()
{
if(LED_state==0)
{
LED_PIN=1;
LED_state=1;
}
else
{
LED_PIN=0;
LED_state=0;
}
}
void DELAY_wait(const unsigned int DELAY)
{
unsigned int x,y;
for(x=0;x<=DELAY;x++)
	{
for(y=0;y<=120;y++);
	}
}