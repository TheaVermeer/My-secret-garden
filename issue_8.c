/*
��C�����У��������Ե�����һ����������дһ�����򣬵���һ����
Ϊone_three()�ĺ������ú�����һ�д�ӡ���ʡ�one�����ٵ��õ�2������
two()��Ȼ������һ�д�ӡ���ʡ�three����two()������һ����ʾ���ʡ�two����
main()�����ڵ��� one_three()����ǰҪ��ӡ���starting now:����
���ڵ�����Ϻ���ʾ���done!������ˣ��ó�������Ӧ������ʾ��
starting��now:
one
two
three
done!
*/

#include <stdio.h>
void one_three();
void two();
int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	return 0;
}
void two()
{
	printf("two\n");
}
void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}
