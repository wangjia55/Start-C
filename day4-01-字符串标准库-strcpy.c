/*
定义函数：char *strcpy(char *dest, const char *src);

函数说明：strcpy()会将参数src 字符串拷贝至参数dest 所指的地址。

返回值：返回参数dest 的字符串起始地址。

附加说明：如果参数 dest 所指的内存空间不够大，可能会造成缓冲溢出(buffer Overflow)的错误情况，在编写程序时请特别留意，或者用strncpy()来取代。
*/

#include <string.h>
#include <stdio.h>

int main()
{
    char src[30] = "string-hello-world";
    char dest[] = "string-2";
    printf("before scopy is :%s\n",src);
    printf("after scopy is :%s\n",strcpy(src,dest));

}
