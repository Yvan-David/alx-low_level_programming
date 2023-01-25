#include<stdio.h>
int rec (int a)
{
int x = a;
int f;
if (x==1)
return (1);
else
{
f=x*rec(x-1);
return(f);
}
}
int main ()
{
int a,fact;
printf("Enter any number\n");
scanf("%d", &a);
fact=rec(a);
printf("Factorial number of %d is: %d",a,fact);
return (0);
}