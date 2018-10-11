//求5! （5阶乘）
#include <stdio.h> // 表示要用到输入输出的函数

//主函数
int main()
{
	int i,t;
	t = 1;
	i = 2;

	while(i<=5)
	{
		t = t*i;
		i = i+1;
	}

	printf("%d\n",t);
	return 0;
}