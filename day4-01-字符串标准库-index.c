/*
相关函数：rindex, srechr, strrchr

头文件：#include <string.h>

定义函数：char * index(const char *s, int c);

函数说明：index()用来找出参数s 字符串中第一个出现的参数c 地址，然后将该字符出现的地址返回。字符串结束字符(NULL)也视为字符串一部分。

返回值：如果找到指定的字符则返回该字符所在地址，否则返回0.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char *s = "123456ABCDEF";
    char *p;

    p = index(s,'5');
    printf("%s\n",p);
    return 0 ;
}
