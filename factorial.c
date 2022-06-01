#include<stdio.h>
int main()
{
int x,y;
x=1;
y=1;
while(x<=8)
{
y=y*x;
printf("%d\n",y);
x++;
}
return 0;
}