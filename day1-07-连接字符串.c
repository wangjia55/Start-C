/*
（连接字符串）编写一个函数void strlink(char s[], char t[])
 将字符串t连接到字符串s的尾部
*/

#include <stdio.h>

void strlink(char s[] , char t[]);

int main()
{
   char start[20] = "Hello";
   char end[] = "World";
   strlink( start , end );
   printf("result is %s\n",start);
   return 0;
}


void strlink(char s[] , char t[])
{
	int i = 0;
 	while(s[i] != '\0'){
	   i++;
	}

	int j = 0;
	while((s[i] = t[j]) != '\0'){
	   i++;
           j++;
	}
}
