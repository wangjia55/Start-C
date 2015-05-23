/*
strcat() 函数用来连接字符串，其原型为：
 char *strcat(char *dest, const char *src);

【参数】dest 为目的字符串指针，src 为源字符串指针。

strcat() 会将参数 src 字符串复制到参数 dest 所指的字符串尾部；dest 最后的结束字符 NULL 会被覆盖掉，并在连接后的字符串的尾部再增加一个 NULL。
注意：dest 与 src 所指的内存空间不能重叠，且 dest 要有足够的空间来容纳要复制的字符串。

【返回值】返回dest 字符串起始地址。
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];
    strcpy(str,"these ");
    strcat(str, "strings ");
    strcat(str," are");
    strcat(str," connected");
    puts(str);
    return 0 ;
}

