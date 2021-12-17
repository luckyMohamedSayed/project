#include<reg52.h>
void write_PIN_P1(const unsigned char,const bit );
bit read_PIN_P1(const unsigned char);
void main (void)
{
bit x;
while (1)
{
x= read_PIN_P1(0);
write_PIN_P1(1,x);
}
}
void write_PIN_P1(unsigned char PIN,const bit VALUE)
{
unsigned char p=0x01;
p<<=PIN;
if(VALUE==1)
{
P1|=p;
	return;
}
p=~p;
P1&=p;
}
bit read_PIN_P1(unsigned char PIN)
{
unsigned char p=0x01;
p<<=PIN;
write_PIN_P1(PIN ,1 );
return(P1&p);
}







