/*read and display the character untill $ is given*/
#include<stdio.h>
int main()
{
	char ch;
	printf("enter character($ to end)");
	scanf("%c",&ch);
	while(ch!='$')
	{
		printf("%c",ch);
		scanf("%c",&ch);
		}
		return 0;
	}
