#include<stdio.h>
#include<conio.h>
int main ()
{
 int A,R;
 clrscr();
 /* here A = area & R = radius */
 printf("Enter redius of a circle");
 scanf("%d",&R);
 A = 22/7 * R * R ;
 printf("%d = 22/7 * R* R",A,R);
 getch();
 return 0;
 }