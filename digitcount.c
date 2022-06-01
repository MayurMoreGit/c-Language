#include<stdio.h>
int main ()
{
int dc,num,x;
printf("Enter  a Number ");
scanf("%d",&num);
if(num<0)
{
x=num-1;
}
else
{
x=num;
}
dc=1;
while(x>9)
{
dc++;
x=x/10;
}
printf("digit Count %d\n",dc);
return 0;
}