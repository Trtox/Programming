#include "stdio.h"
int main()
{
int a,b,c,broj,konacan;
printf("Uneti broj");
scanf("%d", &broj);
a=broj%100;
b=broj%10;
b=b%10;
c=broj%10;
c=c%10;
c=c%10;
if(a%2==0)
{a=0;}
else
{a=1;}
if(b%2==0)
{b=0;}
else
{b=1;}
if(c%2==0)
{c=0;}
else
{c=1;}b

printf("%d%d%d",a,b,c);
konacan=(a*100)+(b*10)+c;
printf("Konacni br je=%d",konacan);
}
