#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    int marks[3];
};

void info(struct student *a)
{
    printf("Name of student: ");
    scanf("%s",a->name);
    printf("Enter roll of student: ");
    scanf("%d",&a->roll);
    printf("Enter marks of three subjects P C M: ");
    scanf("%d %d %d",&a->marks[0],&a->marks[1],&a->marks[2]);
}

void print(struct student a)
{
    printf("\nName of student is: ");
    printf("%s \n",a.name);
    printf("Roll of student is: ");
    printf("%d \n",a.roll);
    printf("Marks of three subjects P C M are: ");
    printf("%d %d %d \n\n",a.marks[0],a.marks[1],a.marks[2]);
}

int main(){
    struct student a,b,c,d,e;
    info(&a);
    info(&b);
    info(&c);
    info(&d);
    info(&e);
    print(a);
    print(b);
    print(c);
    print(d);
    print(e);
}