#include<stdio.h>


int main()
{
int a,b;
char j;
printf("enter your first number:\n");
scanf("%d",&a);
printf("enter your second number:\n");
scanf("%d",&b);
printf("enter your operation :\n");
scanf("%c",&j);
if(j=='+'){
printf("your answer:%d",a+b);}
else if(j=='-'){
printf("you answer:%d",a-b);}
else if(j=='*'){
printf("your answer:%d",a*b);}
else if(j=='/'){
printf("your answer:%d",a/b);}

    return 0;
}