/*
头文件：#include <stdio.h>

fopen()是一个常用的函数，用来以指定的方式打开文件，其原型为：
    FILE * fopen(const char * path, const char * mode);

【参数】path为包含了路径的文件名，mode为文件打开方式。

注意：一般而言，开文件后会作一些文件读取或写入的动作，若开文件失败，接下来的读写动作也无法顺利进行，所以在fopen()后请作错误判断及处理。

文件操作完成后，需要将文件关闭，一定要注意，否则会造成文件所占用内存泄露和在下次访问文件时出现问题。
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE* fstream;
    char *  msg = "Hello world ,This is Jacob";
    fstream = fopen("test.txt","at+");
    
    if(fstream == NULL)
    {
	printf("Open file failed \n");
	exit(1);
    }else
    {
	fputs("Hello ",fstream);
	printf("open file success\n");
    }
    fclose(fstream);
    return 0 ;
}

