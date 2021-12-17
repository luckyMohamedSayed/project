#include <reg52.h>

sbit pin_LED=P1^5;



void Init_LED(void);
void changing_LED_state(void);
void DELAY_wait(const unsigned int);

void main (void)
{
Init_LED();

while(1)
{
changing_LED_state();
DELAY_wait(1000);
}

}


void Init_LED(void)
{
bit state_LED_G=0;
}

void changing_LED_state(void)
{
if(state_LED_G==0)
{ 

state_LED_G=1;
pin_LED =1;
}
else
{
state_LED_G=0;
pin_LED =0;
}
}


void DElay_wait (const unsigned int DELAY)
{
unsigned int x,y;
for(x=0;x<=DELAY;x++)
{
for(y=0;y<=120;y++);
}
}


