#include<stdio.h>
struct flower {
char name [25];
float price;
int page;
};
int main ()
{
struct flower b1, b2, b3;
printf("Enter the name, price(in dollars) and the number of pages:\n");
scanf("%s %f %d",b1.name,&b1.price,&b1.page);
scanf("%s %f %d",b2.name,&b2.price,&b2.page);
scanf("%s %f %d",b3.name,&b3.price,&b3.page);
printf("Name=%s\t, Price=%.2f\t, Page= %d\n",b1.name,b1.price,b1.page);
printf("Name=%s\t, Price=%.2f\t, Page=%d\n",b2.name,b2.price,b2.page);
printf("Name=%s\t, Price=%.2f\t, Page=%d\n", b3.name, b3.price, b3.page);
return (0);
}