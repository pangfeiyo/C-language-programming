#include<stdio.h>
#include<math.h>  //�������������Ҫ�õ���ѧ����
int main()
{
	double a,b,c,s,area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	s = (a+b+c)/2;	
	area = sqrt(s * (s-a) * (s-b) * (s-c)); //sqrt() ƽ������������ѧ����
	printf("a=%f\tb=%f\tc=%f\n",a,b,c); //%f ������
	printf("area=%f\n",area);
	return 0;
}

