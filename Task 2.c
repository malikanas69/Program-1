#include<stdio.h>
void main()
{
int i=0,num,sum=0;
float avg;

        printf("Enter Number of values:\n");
scanf("%d",&num);
while(i<num)
{
    scanf("%d",&num);
    sum=sum+num;
    i++;
}
 avg=sum/6;
printf("Sum=%d and avg=%d",sum,avg);
return 0;
}


