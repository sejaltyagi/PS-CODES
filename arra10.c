#include<stdio.h>
#include<limits.h>
int main(){
    int t,n,a[100000],f[100000];
    
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        f[0]={0};
        int max=INT_MIN;
        int max1=INT_MIN;
        for (int i = 0; i < n; i++) {
            scanf("%d",&a[i]);
            if(a[i]>max)
            max=a[i];
        }
        // for(int j=0;j<=max;j++)
        //     f[j]=0;
        
        for (int i = 0; i < n; i++) {
            f[a[i]]++;
        }
        for(int j=0;j<=max;j++){
            if(f[j]>max1)
            max1=f[j];
        }
        max1=n-max1;
        printf("%d\n",max1);
    }
    return 0;
}