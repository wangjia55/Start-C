/*
（递归-斐波那契数列），打印10个数列 1,2,3,5,8,13,21...
*/
#include <stdio.h>

#define COUNT 15

int main()
{
	int i ;
	for(i = 1 ; i< COUNT ;i++){
		printf("%d ", sequence(i));
	}
	printf("\n");

	return 0;
}

int sequence(int n)
{
	if( n == 1){
		return 1;
	}else if(n == 2){
		return 2;
	}else{
		return sequence(n-1)+sequence(n-2);
	}

}
