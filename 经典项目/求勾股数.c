//求100以内的所有勾股数; 
//所谓勾股数, 是指能够构成直角三角形三条边的三个正整数(a, b, c); 

#include<stdio.h>
#include<math.h>
int main (void)
{
	int a, b, c, count = 0;
	printf ("100以内的勾股数有: \n");
	printf ("	a	 b	c		 a	 b	c		 a	 b	c		 a	 b	c\n");
	/*求100以内勾股数 */
	for (a = 1; a <= 100; a++)
		for (b = a + 1; b <= 100; b++)
		{
			c = (int) sqrt (a * a + b * b);	/*求c值 */
			if (c * c == a * a + b * b && a + b > c && a + c > b && b + c > a && c <= 100)	/*判断c的平方是否等于a2+b2 */
			{
				printf ("%4d %4d %4d	 ", a, b, c);
				count++;
				if (count % 4 == 0)			/*每输出4组解就换行 */
					printf ("\n");
			}
		}

	printf ("\n");
	return 0;
}

//运行结果: 

/*
100以内的勾股数有: 
	 a	b	c		a	b	c		a	b	c		a	b	c
	 3	4	5		5	 12	 13		6	8	 10		7	 24	 25
	 8	 15	 17		9	 12	 15		9	 40	 41		 10	 24	 26
	11	 60	 61		 12	 16	 20		 12	 35	 37		 13	 84	 85
	14	 48	 50		 15	 20	 25		 15	 36	 39		 16	 30	 34
	16	 63	 65		 18	 24	 30		 18	 80	 82		 20	 21	 29
	20	 48	 52		 21	 28	 35		 21	 72	 75		 24	 32	 40
	24	 45	 51		 24	 70	 74		 25	 60	 65		 27	 36	 45
	28	 45	 53		 28	 96	100		 30	 40	 50		 30	 72	 78
	32	 60	 68		 33	 44	 55		 33	 56	 65		 35	 84	 91
	36	 48	 60		 36	 77	 85		 39	 52	 65		 39	 80	 89
	40	 42	 58		 40	 75	 85		 42	 56	 70		 45	 60	 75
	48	 55	 73		 48	 64	 80		 51	 68	 85		 54	 72	 90
	57	 76	 95		 60	 63	 87		 60	 80	100		 65	 72	 97
	*/
