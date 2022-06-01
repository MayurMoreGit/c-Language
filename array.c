#include<stdio.h>
#include<stdlib.h>
typedef struct __array
{
int **x;
int row;
int size;
}Array;
Array *createarray()
{
Array *array;
array=(Array *)malloc (sizeof(Array));
array->size=0;
array->row=0;
array->x=NULL;
return array;
}
void setElementOfArray(Array *array,int Index,int element)
{
int rowIndex,columnIndex;
int sp,ep,i;
int **tmp;
rowIndex=Index/10;
columnIndex=Index%10;
if(rowIndex>=array->row)
{
if(array->x!=NULL)
{
tmp=(int **)calloc (rowIndex+1,sizeof(int *));
sp=0;
ep=array->row-1;
for(i=sp;i<ep;i++)
{
tmp[i]=array->x[i];
}
free(array->x);
array->x=tmp;
array->row=rowIndex+1;
}
else
{
array->x=(int **)calloc (rowIndex+1,sizeof(int *));
array->row=rowIndex+1;
}
}
if(array->x[rowIndex]==NULL)
{
array->x[rowIndex]=(int *)calloc (10,sizeof(int));
}
array->x[rowIndex][columnIndex]=element;
if(Index>=array->size) array->size=Index+1;
}
int getElementOfArray(Array*array,int Index)
{
int rowIndex,columnIndex;
if(array->x==NULL) return 0;
rowIndex=Index/10;
if(rowIndex>=array->row) return 0;
if(array->x[rowIndex]==NULL) return 0;
columnIndex=Index%10;
return array->x[rowIndex][columnIndex];
}
int getSizeOfArray(Array *array)
{
return array->size;
}
int main ()
{
Array *array;
int i;
array=createarray();
setElementOfArray(array,50,2000);
setElementOfArray(array,55,2670);
setElementOfArray(array,10,2000);
setElementOfArray(array,40,20);
setElementOfArray(array,2,200);
for(i=0;i<=getSizeOfArray(array);i++)
{
printf("(%d----->%d)",i,getElementOfArray(array,i));
}
return 0;
}