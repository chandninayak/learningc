/*display first natural number using while loop*/
#include<stdio.h>
int main()
{
int i,n;
printf("enter number");
scanf("%d",&n);
i=1;
while(i<=n)
{
	printf("%d\n",i);
	i++;
}
return 0;
}
