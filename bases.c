/*-以十进制、八进制、十六进制打印十进制数100*/

#include <stdio.h>
int main(void)
{
	int num=100;
	printf("十进制100=%d,八进制100=%o,十六进制100=%x\n",num,num,num);
	printf("10(100)=%d,8(100)=%#o,16(100)=%#x\n",num,num,num);
	getchar();
	return 0;
}
