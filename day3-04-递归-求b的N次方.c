/*
写出一个函数，计算b的n次方 
*/

#include <stdio.h>

int pow2(int b , int n );

int main()
{
	int b = 2 , n = 3;
	int result = pow2(b ,n );
	printf("result is : %d\n",result);
	return 0 ;
}

int pow2(int b , int n )
{
	if ( n == 0 )
		return 1;
	return pow2(b,n-1) * b;
}

int pow3(int b ,int n )
{
	int result = 1;
	int i ;
	for(i = 0 ; i < n ; i++){
		result *= b;
	}
	return result;
}
