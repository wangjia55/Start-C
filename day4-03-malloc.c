/*(

头文件：#include <stdlib.h>

malloc() 函数用来动态地分配内存空间（如果你不了解动态内存分配，请查看：C语言动态内存分配及变量存储类别），其原型为：
void* malloc (size_t size);

【参数说明】size 为需要分配的内存空间的大小，以字节（Byte）计。

【函数说明】malloc() 在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。如果希望在分配内存的同时进行初始化，请使用 calloc() 函数。

【返回值】分配成功返回指向该内存的地址，失败则返回 NULL。

由于申请内存空间时可能有也可能没有，所以需要自行判断是否申请成功，再进行后续操作。
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n ;
    char * buffer;
    printf("Please input size:");
    scanf("%d",&i);
    
    buffer = (char*)malloc(i+1);
    if(buffer == NULL) exit(1);

    for(n = 0 ; n<i ; n++)
    {
	buffer[n] = rand()%26+'a';
    }
    buffer[i] = '\0';

    printf("the String is : %s\n",buffer);

    free(buffer);

    return 0 ;
}
