#include<stdio.h>
#include<math.h>  //在这个程序中需要用到数学函数
int main()
{
	double a,b,c,s,area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	s = (a+b+c)/2;	
	area = sqrt(s * (s-a) * (s-b) * (s-c)); //sqrt() 平方根函数，数学函数
	printf("a=%f\tb=%f\tc=%f\n",a,b,c); //%f 浮点数
	printf("area=%f\n",area);
	return 0;
}

