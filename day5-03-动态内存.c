/*
使用动态内存时需要用户自己去申请资源和释放资源。用户可以随时的分配所需空间，
根据需要分配空间大小，并在最后释放申请内存。
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *alloc_test();

int main()
{
    char *p1,*p2;
    p1 =  alloc_test();
    p2 = p1;

    printf("%s\n",p1);
    printf("%s\n",p2);

    free(p1);
 //   free(p2);

    return 0 ;
}

char *alloc_test()
{
    char *pchar = malloc(20);
    strcpy(pchar,"helloworld!");
    return pchar;
}
