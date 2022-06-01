#include<stdio.h>
int main()
{
int y,j,x,k;
printf("Enter  a Number  ");
scanf("%d",&x);
y=2;
k=0;
j=x/2;
while(y<=j)
{
if(x%y==0)
{
k=1;
break;
}
y++;
}
if(k==0)
{
printf("%d is a prime Number",x);
}
else
{
printf("%d is not a prime Number",x);
}
return 0;
}