/*
（字符串中字符的查找）给定一个字符串，请写出一个函数，判断该字符串中是否含有某个字符，如果有，返回1，如果没有，返回0；
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int searchString(char str[] , char c);
	char name[] = "Jacob-burning";
	int result = searchString(name,'H');
        printf("Result is : %d\n",result);
	return 0;
}


int searchString(char str[] , char c)
{
	int length = strlen(str);
        int i ;
	for(i= 0 ;i <length ; i++){
	 	if( str[i] == c){
			return 1;
		}	
	}
	return 0 ;
}
