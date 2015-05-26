#include <stdio.h>

//void swapValue1(int a, int b );

//void swapValue2(int *a ,int *b);

void swapValue3(int *a ,int *b);
int main()
{
    int a , b;
    a = 20 ;
    b = 30 ;
    swapValue3(&a,&b);
    printf("A = %d , B = %d \n", a, b);
    return 0 ;
}

/*只有这种方式才可以交换，因为这种方式才是直接操作指针所指向的内存数据 */
void swapValue3(int *a ,int *b)
{
    int temp  = *a;
    *a = *b;
    *b = temp;
}




/*
这种方式也不能交换值，这只是交换了指针自己指向的区域
void swapValue2(int *a ,int *b)
{
    int *temp;
    temp = a;
    a = b;
    b = temp;
}
*/

/*
不能交换值，因为基本数据类型是值传递
void swapValue1(int a, int b )
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    
}
*/

