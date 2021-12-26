#include<stdio.h>
int main() 
{
int I,j,a=0;
for(I=1;I<=10;I++) 
{
if(I<5)
{
for(j=1;j<=I;j++)
{
printf("*");
}
}
else
{
for(j=1;j<=6-a;j++)
{

printf("*");
a++;
}
}
printf("\n");
}
}
    
    