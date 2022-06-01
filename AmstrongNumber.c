#include<stdio.h>
int main()
{
int x,dc,num,sum,y,result,p,i,b;
printf("Enter a Number ");
scanf("%d",&num);
x=num;
dc=1;
while(x>9)
{
dc++;
x=x/10;
}
p=dc;
sum=0;
x=num;
while(x>0)
{
b=x%10;
result=1;
i=1;
while(i<=p)
{
result=result*b;
i++;
}
sum=sum+result;
x=x/10;
}
if(sum==num)
{
printf("%d is an AmstrongNumber",num);
}
else
{
printf("%d is Not an Amstrong Number",num);
}
return 0;
         }