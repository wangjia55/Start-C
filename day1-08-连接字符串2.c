/*
编写一个函数void strlink(char *s, char *t)
 将字符串t连接到字符串s的尾部
*/

#include <stdio.h>

void strlink(char *s , char *t);

int main()
{
    char s[] = "Hello";
    char t[] = "World";   
    strlink(s,t);
    printf("result is : %s\n",s);
    return 0 ;
}

void strlink(char *s , char *t)
{
    while(*s != '\0'){
	s++;
    }

    while((*s = *t ) != '\0'){
	s++;
	t++;
    }
}
