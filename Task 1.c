#include<stdio.h>
void main()
{
int i,j,even=0,odd=0;
for(i=1;i<=10;i++)
{
    printf("Enter  Numbers :");
    scanf("%d",&j);
if(i%2==0)
even=even+1;
else if(i%2==1)
    odd=odd+1;
}
printf("Even Numbers:%d/n",even);
printf("Odd NUmbers:%d",odd);
return 0;
}
