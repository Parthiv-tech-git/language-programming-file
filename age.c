#include<stdio.h>
int main()
{
int age;
printf("enter your age:\n");
scanf("%d",&age);
if(age >= 18){
printf("your are auldt\n");
printf("you can vote\n");
printf("you can ride and drive\n");
printf("you have family resonblitie\n");
 else if(age < 18){
 printf("sorry aren't auldt");}
 
 else{
 printf("your are enter wrong ");}



return 0;}