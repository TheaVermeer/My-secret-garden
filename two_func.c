/*一个文件中包含2个函数*/
#include "stdio.h"
void butler(void);
int main(void)
{
	printf("What's your name?\n");
	butler();
	printf("Nice to meet you!\n");
	return 0;	
} 
void butler()
{
	printf("TheaVermeer\n");
}
