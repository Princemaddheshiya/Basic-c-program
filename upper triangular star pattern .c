#include<stdio.h>
main() 
{
int row,i,j;
printf("enter the number of row::");
scanf("%d",&row);
for(i=1; i<=row; i++)

{

for(j=1; j<=i; j++)

printf("*");
printf("\n");
}
}
