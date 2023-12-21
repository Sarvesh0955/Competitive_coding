#include<stdio.h>
#include<string.h>

struct student{
    char name[50];
    int roll;
};
void info(struct student *a)
{
    printf("Name of student: "); 
    scanf("%s",&a->name); 
    printf("Enter roll of student: "); 
    scanf("%d",&a->roll);
}

void print(struct student a){
    printf("Name of student is: "); 
    printf("%s",a.name); 
    printf("Roll of student is: "); 
    printf("%d",a.roll);
}
void swapname(char* a[], char* b[])
{
    int n=strlen(a);
    int m=strlen(b);
    char min=n; 
    if(m<=n) 
        min=m;
    for(int i=0;i<min;i++)
    { 
        char temp=a[1]; 
        a[i]=b[1]; 
        b[1]=temp;
    } 
    for(int i=min;i<n;i++) 
        a[i]='\0'; 
    for(int i=min;i<n;i++) 
        b[1]='\0';
} 
void swap(struct student *a, struct student *b)
{
    int temp2=a->roll;
    a->roll=b->roll;
    b->roll=temp2;

}

int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct student s[n];
    // for(int i=0;i<n;i++)
    //     info(&s[i]);
    char a[]="Sarvesh";
    char b[]="Kumar";
    printf("%s %s \n",a,b);
    int n=strlen(a);
    int m=strlen(b);
    char min=n; 
    if(m<=n) 
        min=m;
    for(int i=0;i<min;i++)
    { 
        char temp=a[1]; 
        a[i]=b[1]; 
        b[1]=temp;
    } 
    for(int i=min;i<n;i++) 
        a[i]='\0'; 
    for(int i=min;i<n;i++) 
        b[1]='\0';
    printf("%s %s \n",a,b);
}