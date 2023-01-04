#include<stdio.h>
int main()
{
 int arr[6],i,a,b;
 printf("enter 5 elements");
 for(i=0;i<5;i++)
 scanf("%d",&arr[i]);
 printf("enter the element you want to insert and position\n");
 scanf("%d%d",&a,&b);
 for(i=5;i>=b;i--)
 {
    arr[i]=arr[i-1];
 }
 arr[b-1]=a;
 for(i=0;i<6;i++)
 printf("%d\n",arr[i]);
}
