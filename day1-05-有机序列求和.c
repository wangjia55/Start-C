/*
（有机序列求和）有一个分数序列：2/1，3/2，5/3，8/5，13/8，21/13……  编程求这个序列的前20项之和。
*/
#include <stdio.h>

float sumSequence(int size);

int main()
{
	int size = 4;
	float result = sumSequence(size);
	printf("the size is :%d and result is: %f\n ",size ,result);
	return 0;
}

float sumSequence(int size)
{
	float a = 1;
	float b = 2;
	float tmp =2;

	float result;
	int i ;
	for(i = 0 ;i < size ; i++){
		result += b/a;
		tmp = b;
		b = tmp + a;
		a = tmp; 
	}
	return result;
}
