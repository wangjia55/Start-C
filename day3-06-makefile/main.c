

#include <stdio.h>
#include "sum.h"

int main()
{

	int a ,b ;
	printf("Please input a ,b \n");
	scanf("%d,%d",&a,&b);
	int result = sum( a ,b );
	printf("Result is : %d\n",result);
	return 0;

}
