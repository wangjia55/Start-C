#include <stdio.h>
int a[] = {1,2,3,4,5};

#define N sizeof a/ sizeof a[0]

int main()
{
    int j , *p;
    /*数组名和下标顺序访问数组的元素*/
    for(j = 0 ; j < N ; j++)
    {
	printf("a[%d]= %d\t",j ,a[j]);
    }

    printf("\n");

    /*让指针顺序指向数组的各元素，遍历数组*/
    for(p = a; p< a + N ; p++)
    {
	printf("a[%d]= %d\t",j ,*p);
	
    }
    printf("\n");

    /*指针与游标变量结合，改变游标变量遍历数组*/
    for(p = a , j = 0 ; p+j< a + N ; j++)
    {
	printf("a[%d]= %d\t",j ,*(p+j));
	
    }
    printf("\n");
    return 0 ;
}

