#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
}stu;
int main(){
    
    printf("%d",sizeof(struct student));
    return 0;
}