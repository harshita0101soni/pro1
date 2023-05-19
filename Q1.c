#include<stdio.h>
int main()
{
	int num;
	printf("enter a no. :");
	scanf("%d",&num);
	num>10 && num<20 ?printf("correct input"):printf("wrong input");
	return 0;
}
