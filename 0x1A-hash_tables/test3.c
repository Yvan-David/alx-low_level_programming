#include <stdio.h>
#include <string.h>
struct vehicle {
char *name;
float price;
int speed;
};
int main ()
{
struct vehicle v1, v2, v3;
char name1[]= "BMW";
char name2[]= "TOYOTA";
char name3[]= "HYNDAI";
v1.name = name1;
v1.price = 5004000.5;
v1.speed = 1030;
v2.name = name2;
v2.price = 5003000.5;
v2.speed = 1040;
v3.name = name3;
v3.price = 5007000.5;
v3.speed = 1060;
printf("Name=%s\t, Price=%.2f\t, speed limit= %d\n",v1.name,v1.price,v1.speed);
printf("Name=%s\t, Price=%.2f\t, speed limit=%d\n",v2.name,v2.price,v2.speed);
printf("Name=%s\t, Price=%.2f\t, speed limit=%d\n", v3.name, v3.price, v3.speed);
return (0);
}