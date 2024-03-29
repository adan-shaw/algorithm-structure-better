/*
 稀疏矩阵
 说明
 如果在矩阵中, 多数的元素并没有资料, 称此矩阵为稀疏矩阵(sparse matrix),  由于矩阵在程
 式中常使用二维阵列表示, 二维阵列的大小与使用的记忆体空间成正比, 如果多数的元素没有
 资料, 则会造成记忆体空间的浪费, 为此, 必须设计稀疏矩阵的阵列储存方式, 利用较少的记
 忆体空间储存完整的矩阵资讯; 
 解法
 在这边所介绍的方法较为简单, 阵列只储存矩阵的行数、列数与有资料的索引位置及其值, 在
 需要使用矩阵资料时, 再透过程式运算加以还原, 例如若矩阵资料如下, 其中0表示矩阵中该
 位置没有资料: 
 0 0 0 0 0 0
 0 3 0 0 0 0
 0 0 0 6 0 0
 0 0 9 0 0 0
 0 0 0 0 12 0
 这个矩阵是5X6矩阵, 非零元素有4个, 您要使用的阵列第一列记录其列数、行数与非零元素个
 数: 
 5 6 4
 阵列的第二列起, 记录其位置的列索引、行索引与储存值: 
 1 1 3
 2 3 6
 3 2 9
 4 4 12
 所以原本要用30个元素储存的矩阵资讯, 现在只使用了15个元素来储存, 节省了不少记忆体的
 使用; 
 C
*/

#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int num[5][3] = { {5, 6, 4},
	{1, 1, 3},
	{2, 3, 6},
	{3, 2, 9},
	{4, 4, 12}
	};
	int i, j, k = 1;
	printf ("sparse matrix: \n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("%4d", num[i][j]);
		}
		putchar ('\n');
	}
	printf ("\nmatrix还原: \n");
	for (i = 0; i < num[0][0]; i++)
	{
		for (j = 0; j < num[0][1]; j++)
		{
			if (k < num[0][2] && i == num[k][0] && j == num[k][1])
			{
				printf ("%4d ", num[k][2]);
				k++;
			}
			else
				printf ("%4d ", 0);
		}
		putchar ('\n');
	}
	return 0;
}
