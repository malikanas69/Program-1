#include<stdio.h>
int main()
{
	int x = 0, n = 0, fac = 1, a = 2;
     float y=0,p=1 ;
	printf("\n\t\t\t\tx=");
	scanf("%d",&x);
	printf("\n\t\t___________________________________\n");
	printf("\n\t\t\t\tn=");
	scanf("%d",&n);
	printf("\n\t\t___________________________________\n");

	if (n%2==1)
	
	{


		for (int i = 1; i <= n; i = i + 2)
		{
			for (int k = i; k >= 1; k--)
			
			{

				fac = fac * k;
			}

			for(int j=0;j<i;j++)
			{
			p= p*x;
			}
			if (a % 2 == 0)
			{
				y = y + (p / fac);
				a++;
			}
			else if (a %2==1)
			{
				y = y - (p / fac);
				a++;
			}
			fac = 1;
			p=1;
		}

		printf("\n\t\t\t    y= %f \n",y);
		printf("\n\t\t___________________________________\n");
	}

	else
	printf("\n\t\t    Kindly Type Odd Value In 'n'\n");
	return 0;
}
