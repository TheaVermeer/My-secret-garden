/*��дһ�����򣬴���һ�����ͱ���toes������toes����Ϊ10�������л�
Ҫ����toes��������toes��ƽ�����ó���Ӧ��ӡ3��ֵ�����ֱ�������ʾ��
�֡�*/

#include <stdio.h>
int square(int i);
int cube(int j);
int main(void)
{
	int toes=10;
	printf("toes=%d,toes square:%d,toes cube:%d\n",toes,square(toes),cube(toes));
	return 0;
}
int square(int i)
{
	int sq_toes;
	sq_toes=i*i;
	return sq_toes;
}
int  cube(int j)
{
	int cu_toes;
	cu_toes=j*j*j;
	return cu_toes;
}
