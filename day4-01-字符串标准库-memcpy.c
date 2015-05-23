/*
   主要学习字符串的相关的标准库
   函数名: memcpy 
   功  能: 从源source中拷贝n个字节到目标destin中 
   用  法: void *memcpy(void *destin, void *source, unsigned n); 
   如果里面的目标文件有记录的话，那么拷贝原文件的时候覆盖
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "*********";
    char dest[] = "klmnopqrst";
    char *ptr;

    printf("Destination before memcpy is: %s\n",dest);
    ptr = memcpy(dest,src,strlen(src));

    if(ptr){
	printf("after memcpy is : %s\n",dest);
    }else{
	printf("memcpy failed \n");
    }

    return 0 ;

}



