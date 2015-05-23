/*

strcmp() 用来比较字符串（区分大小写），其原型为：
    int strcmp(const char *s1, const char *s2);

    【参数】s1, s2 为需要比较的两个字符串。

    字符串大小的比较是以ASCII 码表上的顺序来决定，此顺序亦为字符的值。strcmp()首先将s1 第一个字符值减去s2 第一个字符值，若差值为0 则再继续比较下个字符，若差值不为0 则将差值返回。例如字符串"Ac"和"ba"比较则会返回字符"A"(65)和'b'(98)的差值(－33)。

    【返回值】若参数s1 和s2 字符串相同则返回0。s1 若大于s2 则返回大于0 的值。s1 若小于s2 则返回小于0 的值。
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char *a = "abCDE";
    char *b = "Abcde";
    char *c = "abcde";
    char *d = "abCDE";

    printf("strcmp(a,b) is : %d\n",strcmp(a,b));
    printf("strcmp(a,c) is : %d\n",strcmp(a,c));
    printf("strcmp(a,d) is : %d\n",strcmp(a,d));
    return 0 ;
}
