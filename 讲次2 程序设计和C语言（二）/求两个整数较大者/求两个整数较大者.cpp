#include<stdio.h>

int main()
{
	int max(int x, int y);	//��Ϊmax�����Ķ�����main����֮�������� 
	int a,b,c;
	scanf("%d,%d", &a, &b);  //scanf()���� ��������  &a��&b��������a��b������
	c = max(a,b);	//����max����
	printf("max=%d\n",c);
	return 0;
}

//max����
int max(int x, int y)
{
	int z;
	if (x>y) z=x;
	else z=y;
	return(z);
}