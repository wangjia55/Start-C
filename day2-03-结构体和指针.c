/*
主要学习使用指针访问结构体的多种方式
*/
#include <stdio.h>

struct Student{
     int age;
     char *name;
};

void change(struct Student *s);

int main()
{

        struct Student stu = {20,"Wang"};
        
        struct Student *s;

        s = &stu;

        printf("1----age= %d , name = %s\n",stu.age ,stu.name);
        
        change(s);

        printf("2----age= %d , name = %s\n",(*s).age ,(*s).name);

        printf("3----age= %d , name = %s\n",s->age ,s->name);

        return 0 ;
}

void change(struct Student *s)
{
        s->age = 28;
        s->name = "Jacob";

}
