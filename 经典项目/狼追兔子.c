/**
一只兔子躲进了10个环形分布的洞中的一个; 狼在第一个洞中没有找到兔子, 就隔一个洞, 到第3个洞去找;
也没有找到, 就隔2个洞, 到第6个洞去找;以后每次多一个洞去找兔子……这样下去, 如果一直找不到兔子, 
请问兔子可能在哪个洞中?
*/

#include <stdio.h>
int main (void)
{
	int n = 0, i = 0, x = 0;
	int a[11];
	for (i = 0; i < 11; i++)			/*设置数组初值 */
		a[i] = 1;
	for (i = 0; i < 1000; i++)		/*穷举搜索 */
	{
		n += (i + 1);
		x = n % 10;
		a[x] = 0;										/*未找到, 置0 */
	}
	for (i = 0; i < 10; i++)			/*输出结果 */
	{
		if (a[i])
			printf ("可能在第%d个洞\n", i);
	}
	return 0;
}

//运行结果: 

//可能在第2个洞
//可能在第4个洞
//可能在第7个洞
//可能在第9个洞
