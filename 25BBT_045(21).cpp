#include<stdio.h>
#include<conio.h>
int main ()
{
 int net_salary, gross_salary, allowance , deduction ;
 clrscr();
 printf("Enter value of gross_salary");
 scanf("%d",&gross_salary);
 allowance = gross_salary * 10 / 100;
 deduction  = gross_salary * 3 /100;
 net_salary = gross_salary + allowance - deduction ;
 printf("%d = %d + %d - %d",net_salary, gross_salary,allowance, deduction);
 getch();
 return 0;
 }