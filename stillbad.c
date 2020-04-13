/*修复了语法错误的程序*/
#include "stdio.h"
int main()
{
	int n,n2,n3;	/*声明变量*/ 
	n=5;			/*赋值*/
	n2=n*n;			/*计算*/
	n3=n2*n;
	
	/*显示结果*/ 
	printf("n=%d,n squared=%d,cubed=%d\n",n,n2,n3);
	return 0;
}
