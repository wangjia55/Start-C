/*
定义一个main.c 用来调用helper.c 中的sum(v1,v2)函数
*/

#include <stdio.h>
#include "helper.h"


int main()
{
	int a  , b ;
	scanf("%d%d",&a,&b);
	
	int result = sum(a , b);

	printf("Sum is %d\n",result);

	return 0 ;
}
