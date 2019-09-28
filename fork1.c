#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{

	int cpid=fork();
	if(cpid==0)
		printf("hello I am child\n");
	else
		printf("hello I am parent\n");
	return 0;
}
