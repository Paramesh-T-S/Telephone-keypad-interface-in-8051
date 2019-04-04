#include <REGX51.H>
void delay();
sbit r1=P3^0;
sbit r2=P3^1;
sbit r3=P3^2;
sbit r4=P3^3;
sbit c1=P3^4;
sbit c2=P3^5;
sbit c3=P3^6;
//sbit c4=P3^7;
sbit rs=P2^0;
sbit en=P2^1;
void command(int a)
{
P1=a;
	rs=0;
	en=1;
	delay();
	en=0;
	}
void display(int a)
{
P1=a;
	rs=1;
	en=1;
	delay();
	en=0;}

void delay()
{
int i,j;
	for(i=0;i<50;i++)
	for(j=0;j<100;j++);
}
void delay1()
{
int i,j;
	for(i=0;i<100;i++)
	for(j=0;j<1000;j++);
}
int main(){

	char q[]={'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G'};
command(0x38);
	command(0x0c);
	

r1=0,r2=1,r3=1,r4=1;
c1=1,c2=1,c3=1;
if(r1==0&&c1==0)
	{
	display(q[0]);delay1();
	}
	if(r1==0&&c2==0)
		{display(q[1]);delay1();
				}
		if(r1==0&&c3==0)
			{
		display (q[2]);delay1();}
			/*if(r1==0&&c4==0)
            {display (q[3]);delay1();}*/
r2=0,r1=1,r3=1,r4=1;c1=1,c2=1,c3=1;	
	if(r2==0&&c1==0)
       { 
			 display (q[3]);delay1();}	
	if(r2==0&&c2==0)
		{    display (q[4]);delay1();}
		if(r2==0&&c3==0)
{display (q[5]);delay1();}
			/*if(r2==0&&c4==0) 
{display (q[7]);delay1();}*/
			r3=0,r2=1,r1=1,r4=1;c1=1,c2=1,c3=1;	
					if(r3==0&&c1==0)
{display (q[6]);delay1();}
	if(r3==0&&c2==0)
{display (q[7]);delay1();}
		if(r3==0&&c3==0)
{display (q[8]);delay1();}
		/*	if(r3==0&&c4==0)
{display (q[11]);delay1();}*/
			r4=0,r2=1,r3=1,r1=1;c1=1,c2=1,c3=1;
					if(r4==0&&c1==0){
					display (q[9]);delay1();}
	if(r4==0&&c2==0){
	display (q[10]);delay1();}
		if(r4==0&&c3==0){
		display (q[11]);delay1();}
		/*	if(r4==0&&c4==0){
			display (q[15]);delay1();}*/
return 0;
}
