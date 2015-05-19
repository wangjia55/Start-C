/*
（字符串逆序输出）给定一个字符串，请写出一个函数，将该字符串的内容逆序打印出来
*/

#include <stdio.h>
#include <string.h>

int main()
{
        void changeOrder(char str[],int size);
	char str[] = "HelloWorld";
	int length = strlen(str);
        changeOrder(str,length);
	return 0;
}


void changeOrder(char str[],int size)
{
        int i ;
	for(i = size-1; i >= 0 ; i--){
             printf("%c",str[i]);
	} 
	printf("\n");
}

