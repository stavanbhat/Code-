#include<stdio.h>
#include<conio.h>
int main()
{
 int sub1,sub2,sub3,total,average;
 clrscr();
 printf("Enter marks of all three subjects ");
 scanf("%d %d %d ",&sub1,&sub2,&sub3);
 total = sub1 +sub2 + sub3 ;
 printf("%d = %d + %d + %d",total,sub1,sub2,sub3);
 average = total/ 3;
 printf("%d = %d/3",average, total);
 getch();
 return 0;
 }
 