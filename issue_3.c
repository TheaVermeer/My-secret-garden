/*编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考
虑闰年的问题*/

#include <stdio.h>
int main()
{
	int age,days;
	printf("Please enter your age:\n");
	scanf("%d",&age);
	days=365*age;
	printf("Your age is %d,days:%d\n",age,days);
	return 0;
}
