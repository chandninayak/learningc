/*calculate avg or mean*/
#include<stdio.h>
int main()
{
	int num[5];
	int i;
	float sum=0,avg=0;
	for(i=0;i<5;i++)
	{
		printf("enter array element");
		scanf("%d",&num[i]);	
	}
	for(i=0;i<5;i++)
	{
		sum=sum+num[i];
	}
	avg=sum/5;
	printf("\n avg=%f",avg);
	return 0;
}
