#include <stdio.h>

int main() {
	//code
	int a[100],n,i,temp;
	printf("enter array elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
	    temp =a[i];
	    a[i] =a[n-i-1];
	    a[n-i-1] =temp;
	}
	for(i =0;i <n;i++)
	printf("%d\n",a[i]);
	                                    
	return 0;
}