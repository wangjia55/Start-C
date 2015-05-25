/*
 　函数名: getchar
 　　功 能: 从stdin流中读字符
 　　用 法: int getchar(void);
*/

#include <stdio.h>

int main()
{

    int c;

    while((c = getchar()) != '\n')
    {
	printf("%c",c);
    }
    printf("\n");
    return 0 ;
}
