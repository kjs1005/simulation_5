#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add3(int);

int main(int argc, char *argv[]) {
	int i,result;
	for(i=2;i<=100;i++)
	{
		if(i%2==0)result=add3(i);
	}
	printf("2+4+6+...+100�[�`:%d\n",result);
	system("pause");
	return 0;
}
int add3(int j)
{
	static int sum=0;
	sum+=j;
	return sum;
}
