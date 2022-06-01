#include<stdio.h>
int main()
{
int step,i,j;
printf("Enter  a Step ");
scanf("%d",&step);
i=1;
while(i<=step)
{
j=1;
while(j<=i)
{
printf("%d",j);
j++;
}
printf("\n");
i++;
}
return 0;
}