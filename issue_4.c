/*��дһ�������������������
For��he's��a��jolly��good��fellow!
For��he's��a��jolly��good��fellow!
For��he's��a��jolly��good��fellow!
Which��nobody��can��deny!
���� main()�������⣬�ó���Ҫ���������Զ��庯����һ����Ϊ
jolly()�����ڴ�ӡǰ 3 ����Ϣ������һ�δ�ӡһ������һ��������Ϊ
deny()����ӡ���һ����Ϣ*/

#include "stdio.h"
void jolly(void);
void deny(void);
int main()
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}
void jolly()
{
	printf("For he's a jolly good fellow!\n");
}
void deny()
{
	printf("which nobody can deny!");
}
