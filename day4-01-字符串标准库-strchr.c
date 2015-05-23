/*
strchr() 用来查找某字符在字符串中首次出现的位置，其原型为：
    char * strchr (const char *str, int c);

    【参数】str 为要查找的字符串，c 为要查找的字符。

    strchr() 将会找出 str 字符串中第一次出现的字符 c 的地址，然后将该地址返回。

    注意：字符串 str 的结束标志 NUL 也会被纳入检索范围，所以 str 的组后一个字符也可以被定位。

    【返回值】如果找到指定的字符则返回该字符所在地址，否则返回 NULL。

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char *s = "123456abcdefABCDEF";
    char *p;
    p = strchr(s,'3');
    printf("%s\n",p);
    return 0 ;
}
