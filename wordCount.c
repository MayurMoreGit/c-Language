#include<stdio.h>
#include<string.h>
int main ()
{
char a[82];
int x,wc;
printf("enter a sentence : ");
fgets(a,82,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
x=0;
wc=0;
while(a[x]==' ')
{
x++;
}
while(a[x]!='\0')
{
if(a[x]==' ')
{
wc++;
while(a[x]==' ')
{
x++;
}
}
else
{
x++;
}
}
while(x>0 && a[x-1]==' ')
{
wc--;
}
wc++;
printf("number of word %d", wc);
return 0;
}
