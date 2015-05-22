/*
typedef的用法，学习对基本数据类型，指针 ，结构体，枚举 使用typedef
*/

#include <stdio.h>
typedef int MyInt;

struct Student {
	int age ;
	char *name;
};

typedef struct Student MyStu;

typedef char * String;

enum Sex {
	Male,
	Female,
	Unkown
};

typedef enum Sex MySex;

int main()
{
	//---------int -----
	MyInt age = 20;
	printf("age:%d\n ",age);

	//----------struct--------
	MyStu stu = {20, "Jacob"};
	printf("age:%d , name:%s \n",stu.age,stu.name);

    //-----------char * ------
	String name = "Wang";
	printf("name:%s \n",name);

	//----------enum----------
	enum Sex sex1 = Male;
	MySex sex2 = Female;
	printf("sex1 : %d , sex2 : %d \n",sex1,sex2);


	return 0 ;
}
