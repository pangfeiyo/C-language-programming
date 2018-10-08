#include<stdio.h>

int main()
{
	int max(int x, int y);	//因为max函数的定义在main函数之后，需声明 
	int a,b,c;
	scanf("%d,%d", &a, &b);  //scanf()函数 用来输入  &a和&b是用来对a和b的输入
	c = max(a,b);	//调用max函数
	printf("max=%d\n",c);
	return 0;
}

//max函数
int max(int x, int y)
{
	int z;
	if (x>y) z=x;
	else z=y;
	return(z);
}