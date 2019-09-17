#include<stdio.h>
int main()
{
	int n,x,a,y=0,evensum=0,oddsum=0;
	printf("\nenter the number");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		if(y%2==0)
		{
			oddsum=oddsum+a;	
		}
		else
		{
			evensum=evensum+a;
		}
		y++;
	}
			printf("\n even sum= %d",evensum);
			printf("\n odd sum= %d",oddsum);
	if(oddsum==evensum)
	{
		printf("\n both sum are equal");
	}
	else
	{
		printf("\n not equal");
	}
}
