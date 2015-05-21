/*
用结构体存储三个学生的成绩，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），计算出平均成绩，然后按照平均分的降序排列，如下图所示：

请输入第1学生的资料：
学号为：009
姓名是：张三
第1门成绩是：98
第2门成绩是：67
第3门成绩是：87

请输入第2学生的资料：
学号为：005
姓名是：李四
第1门成绩是：92
第2门成绩是：87
第3门成绩是：80

请输入第3学生的资料：
学号为：016
姓名是：王五
第1门成绩是：88
第2门成绩是：90
第3门成绩是：67

学号    姓名     语文    数学     英语    平均分
=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
009       张三          98          67            87           84
=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
005       李四     92          87            80           86.33
=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
016       王五    88          90            67             81.66
*/


#include <stdio.h>

struct Student{
    int code;
	char name[20];
	int chinese;
	int math;
	int english;
	int average;
};

int main()
{
	int i,average;
	struct Student students[3];
	for(i = 0 ; i < 3 ; i++){
		printf("Please input %d Student;\n",i);
		printf("input code:\n");
		scanf("%d",&students[i].code);
		printf("input name:\n");
		scanf("%s",students[i].name);
		printf("input chinese:\n");
		scanf("%d",&students[i].chinese);
		printf("input math:\n");
		scanf("%d",&students[i].math);
		printf("input english:\n");
		scanf("%d",&students[i].english);
		
		average  = (students[i].chinese+students[i].math+students[i].english)/3;
		students[i].average = average;
	}


	int j ;
	struct Student temp ;
	for(i = 0 ; i < 3 ; i++){
		for(j = i ; j <3 ;j++){
			if(students[i].average < students[j].average){
			  temp = students[i];
			  students[i]  = students[j];
			  students[j]  = temp;
			}
		}
	}

	printf("After Sort Result is :\n");
	for(i = 0 ; i < 3; i++){
		printf("%d - %s - %d - %d -%d - %d \n",students[i].code,students[i].name,students[i].chinese,students[i].math,students[i].english,students[i].average);
	}

	return 0 ;
}


