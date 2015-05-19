/*
（简单计算器）写出一个简单计算器（满足：+，-，*，/ 运算），数据内容从终端输入
*/

#include <stdio.h>

int sum(int a ,int b);
int minus(int a ,int b);
int multi(int a, int b);
int devide(int a ,int b);	

int main()
{
	int num1;
	int num2;
	int result;
	char flag;
	printf("please input first number\n");
	scanf("%d",&num1);
	printf("please input char\n");
	scanf("%c",&flag);
	printf("please input second number\n");
	scanf("%d",&num2);
	switch(flag){
		case '+':
			result = sum(num1,num2);
		break;
		case '-':
			result = minus(num1,num2);
		break;
		case '*':
			result = multi(num1,num2);
		break;
		case '/':
			result = devide(num1,num2);
		break;
		default:
		break;
	}
	printf("result is : %d\n",result);
	return 0;
}


int sum(int a ,int b)
{
	return a+b;
}

int minus(int a ,int b)
{
	return a-b;
}

int multi(int a, int b)
{
	return a*b;
}

int devide(int a ,int b)
{

/*	if(b == 0){
		printf("seconde number can not be 0");
		return 0;
	}else{
		return a/b;	
	}
*/
	return a/b;

}
