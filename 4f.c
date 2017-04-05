/*check wheather the given no is prime or not*/
#include<stdio.h>
int main()
{
	int i,n,f=0;
	printf("Enter number :");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("\n%d - %d number is not prime",i,n);
			break;
		}
		
		else
		{
			printf("\n%d - %d number is prime",i,n);
		}
	}
	
	return 0;
	}
