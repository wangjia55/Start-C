/*
实现一个常规宏定义和带参数的宏定义
 */

#include <stdio.h>

#define COUNT 4

#define sum(v1,v2) ((v1)+(v2))

#define multi(v1,v2) ((v1)*(v2))

int main()
{
	int number[COUNT] = {1,5,10,11};
	int i ;
	for(i = 0 ; i < COUNT ; i++){
		printf("%d ,",number[i]);
	}

	int sum = sum(number[0],number[1]);
	printf("\n Sum is: %d\n",sum);
	int multi =  multi( number[0], number[1]);
	printf("\n Multi is: %d\n",multi);
	return 0 ;
}
