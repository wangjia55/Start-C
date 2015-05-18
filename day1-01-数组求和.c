/*
 题目： 给出一个指定的数组，写出一个函数，求出数组的合
*/

#include <stdio.h>
int main()
{
   int sum(int ages[],int size);
   int ages[] = {20,30,33,45,23};
   int size = sizeof(ages)/sizeof(int);
   int all = sum(ages,size); 	
   printf("年龄之和是：%d\n",all);
   return 0;
}

int sum(int arrays[] , int size)
{
  int sum = 0;
  int i ;
  for(i = 0 ; i< size ; i++){
      sum += arrays[i];
  }
  return sum;
}
