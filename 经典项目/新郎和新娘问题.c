/**
有3对情侣结婚, 假设2个新郎为A、B、C, 3个新娘为X、Y、Z, 有参加婚礼的人搞不清谁和谁结婚, 所以去询问了这6位新人中的3位, 
得到的回答如下: 新郎A说他要和新娘X结婚;新娘X说她的未婚夫是新郎C;而新郎C说他要和新娘Z结婚; 

听到这样的回答后, 提问者知道他们都是在开玩笑, 说的都是假话, 但他仍搞不清谁和谁结婚, 现在请编程求出到底哪位新郎和哪位新
娘结婚; 
*/

#include<stdio.h>
int main (void)
{
	char x, y, z;
	for (x = 'A'; x <= 'C'; x++)
		for (y = 'A'; y <= 'C'; y++)
			for (z = 'A'; z <= 'C'; z++)
				if (x != 'A' && x != 'C' && z != 'C' && x != y && x != z && y != z)
				{
					printf ("结果为: \n");
					printf ("新娘X与新郎%c结婚; \n", x);
					printf ("新娘Y与新郎%c结婚; \n", y);
					printf ("新娘Z与新郎%c结婚; \n", z);
				}

	return 0;
}

//运行结果: 

//结果为: 
//新娘X与新郎B结婚; 
//新娘Y与新郎C结婚; 
//新娘Z与新郎A结婚; 
