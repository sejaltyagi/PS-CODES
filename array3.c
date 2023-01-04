#include <stdio.h>

int main() {
	//code
	int a[100],n,p,i;
	printf("enter no. of elements\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i= 0; i< n; i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("enter the position you want to delete element from\n");
	scanf("%d",&p);
	if(p >=n+1)
	printf("deletion not possible\n");
	else
	{
	for(i= p-1; i< n-1; i++)
	{
	    a[i]=a[i+1];
	}
	}
	for(i=0;i<n-1;i++)
	printf("%d\n",a[i]);
	
	   return 0; 
	}
	