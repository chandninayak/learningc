#include<stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	printf("Hello %s \n", argv[1]);
	printf("OK OK");
	printf("Hey %s, I want to tell you something about %s \n", argv[1],argv[2]);
	printf("%s loves you ! and %s is a good guy \n",argv[2],argv[2]);
	printf("Its OK if %s is little shy, but %s... you should be good with him\n\n", argv[2],argv[1]);
	return 0;
}
