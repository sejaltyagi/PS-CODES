#include<stdio.h>
int main()
{
 int arr[6],i,a,b;
 printf("enter 5 elements");
 for(i=0;i<5;i++)
 scanf("%d",&arr[i]);
 printf("enter the postion to delete\n");
 scanf("%d",&b);
 for(i=b-1;i<5;i++)
 {
    arr[i]=arr[i+1];
 }

 for(i=0;i<4;i++)
 printf("%d\n",arr[i]);
}
