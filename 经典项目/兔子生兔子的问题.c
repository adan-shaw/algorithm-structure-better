//有一对兔子, 从出生后第 3 个月起每个月都生一对兔子, 小兔子长到第三个月后每个月又生一对兔子, 假如兔子都不死, 问每个月的兔子总数为多少?

//兔子的规律为数列: 1, 1, 2, 3, 5, 8, 13, 21 ....

//下面使用了迭代解法; 

#include <stdio.h>
int main (void)
{
	long f1 = 1, f2 = 1;// 兔子的数量 
	int i;// 循环次数 
	int n;// 要计算的月份

	printf ("输入要计算的月数: ");
	scanf ("%d", &n);

// 计算出循环次数 
	if (n % 2 == 1)
	{
		n = (n + 1) / 2;
	}
	else
	{
		n = n / 2;
	}

	for (i = 1; i <= n; i++)
	{
		printf ("第%d个月有%d只\n", i * 2 - 1, f1);
		printf ("第%d个月有%d只\n", i * 2, f2);

		f1 = f1 + f2;								/*前两个月加起来赋值给第三个月 */
		f2 = f1 + f2;								/*前两个月加起来赋值给第三个月 */
	}
	return 0;
}

//运行结果: 
//运行结果: 
//输入要计算的月数: 10
//第1个月有1只
//第2个月有1只
//第3个月有2只
//第4个月有3只
//第5个月有5只
//第6个月有8只
//第7个月有13只
//第8个月有21只
//第9个月有34只
//第10个月有55只
//
