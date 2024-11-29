//Name : Hamsini.m
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d;
float r1,r2;
clrscr();
printf("enter the a,b,c values");
scanf("%d%d%d",&a,&b,&c);
d=(b*b-4*a*c);
if(d>0)
{
printf("the roots are real \n");
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("%f%f",r1,r2);
}
else if(d==0)
{
printf("the root are equal \n");
r1=(-b)/(2*a);
r1=r2;
printf("%f%f",r1,r2);
}
else
printf("the root are imaginary \n");
getch();
}