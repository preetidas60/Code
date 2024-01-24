#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Enter the operator you want to use ");
    scanf("%c",&ch);
    printf("Enter the two numbers ");
    scanf("%d%d",&a,&b);
    switch(ch){
        case '+': printf("%d",a+b);
        break;
        case '-':printf("%d",a-b);
        break;
        case '*':printf("%d",a*b);
        break;
        case '/':printf("%f",(float)a/b);
        break;
        default : printf("Invalid ");
    }
    return 0;
}