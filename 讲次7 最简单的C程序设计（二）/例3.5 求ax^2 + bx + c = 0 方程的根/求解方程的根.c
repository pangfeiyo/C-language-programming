#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, disc, x1, x2, p, q;
	scanf("%lf%lf%lf", &a, &b, &c);	//%lf ˫����ʵ��
	disc = b*b - 4*a*c;
	p = -b / (2.0*a);
	q = sqrt(disc) / (2.0*a);
	x1 = p + q;
	x2 = p - q;
	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);	//x1=%7.2f  �������ռ7�У�����С��ռ2��
	return 0;
}