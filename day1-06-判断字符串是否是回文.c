/*
编写一个函数，判断某个字符串是否为回文。
回文就是从左边开始读 和 从右边开始读 都是一样的，比如"abcba"
*/

#include <stdio.h>
#include <string.h>

int isHuiwen(char *str);

int main()
{
   char str[] = "abcba";
   int result = isHuiwen(str);
   printf("result is %d\n",result);
   return 0;
}

/*
 返回1代表是回文
 返回0代表不是回文
 */

int isHuiwen(char *str)
{
   char *left = str;
   char *right = str+strlen(str)-1;
   while(left < right){
	if(*left != *right){
	 return 0;
	}
	left++;
	right--;
    }
    return 1;
}

