/*��дһ�������������������
Brazil,��Russia,��India,��China
India,��China,
Brazil,��Russia
����main()���⣬�ó���Ҫ���������Զ��庯����һ����Ϊbr()����
��һ�δ�ӡһ�Ρ�Brazil, Russia������һ����Ϊic()������һ�δ�ӡһ�Ρ�India,
China��������������main()���������*/

#include <stdio.h>
void br();
void ic();
int main()
{
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",");
	printf("\n");
	br();
	return 0;
}
void br()
{
	printf("Brazil,Russia");
}
void ic()
{
	printf("India,China");
}
