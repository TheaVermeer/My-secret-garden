/*编写一个程序，创建一个整型变量toes，并将toes设置为10。程序中还
要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区
分。*/

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
