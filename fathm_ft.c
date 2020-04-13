/*把2音寻转化成英寸*/
#include "stdio.h"
int main(void)
{
	int feet,fathoms;	/*声明变量*/
	fathoms=2;			/*赋值*/
	feet=6*fathoms;		/*计算表达式*/
	printf("There are %d feets in %d fathoms.\n",feet,fathoms);	/*输出结果*/
	return 0;			/*返回0*/
}
