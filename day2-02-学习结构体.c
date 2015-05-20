/*
，定义一个Person结构体，里面包含age，height，name；
*/

#include <stdio.h>

struct Person
{
        int age;
        double height;
        char *name;
};

int main()
{
        struct Person per = {20,1.75,"Jacob"};

        printf("age=%d , height = %f ,name = %s \n",per.age,per.height,per.name);
        return 0 ;
}

