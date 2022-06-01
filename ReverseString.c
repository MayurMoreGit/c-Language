#include<stdio.h>
int main ()
{
int x,e,f;
char a[21],g;
printf("Enter  a String ");
scanf("%s",a);
fflush(stdin);
f=0;
while(a[f]!='\0')
{
f++;
}
f--;
e=0;
while(e<f)
{
g=a[e];
a[e]=a[f];
a[f]=g;
e++;
f--;
}
printf("Reverse String %s",a);
return 0;
}