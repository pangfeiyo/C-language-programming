#include<stdio.h>
int main()
{
	char c1,c2;   //char，字符变量说明符
	c1 = 'A';
	c2 = c1 + 32;	//小写字母比大写字母大32
	printf("%c\n",c2);	//输出C2字符类型的数据  %c 单个字符
	printf("%d\n",c2);	//将C2的值用到整型输出
	return 0;
}