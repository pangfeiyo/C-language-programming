#include<stdio.h>
int main()
{
	float p0=1000,    //����
		  r1=0.0036,  //һ�����
		  r2=0.0225,  //һ������
		  r3=0.0198,  //���ΰ��궨��
		  p1,p2,p3;
	
	p1 = p0 * (1 + r1);
	p2 = p0 * (1 + r2);
	p3 = p0 * (1 + r3/2) * (1 + r3/2);
	printf("%f\n%f\n%f\n",p1,p2,p3);
	return 0;
}
