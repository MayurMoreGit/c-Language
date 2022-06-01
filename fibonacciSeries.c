#include<stdio.h>
int main()
{
int x,y,z;
x=1;
y=1;
while(x<=34)
{
printf("%d\n",x);
z=x+y;
x=y;
y=z;
}
return 0;
}