#include <stdio.h>
int series(int ) ;
int main() 
{
int n,j,x;

printf("enter the nth number:");
scanf("%d",&n) ;
printf("your series !\n");
for(j=1;j<=n;j++) 
{
x=series (j) ;
printf("%d+",x);


}

}
int series(int a )
{
int b;
b=a*a;
return b;
}

