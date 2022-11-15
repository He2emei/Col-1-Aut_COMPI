#include<stdio.h>
int n,ipt[1007];
double fun(int a[],int n,int *max,int *min){
    double ans=0;
    for(int i=0;i<n;i++){
        ans+=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[j]<=a[j+1]) break;
            int x=a[j]; a[j]=a[j+1]; a[j+1]=x;
        }
    }
    printf("%d %d ",a[n-1],a[0]);
    return ans/n;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ipt[i]);
    }
    printf("%lf",fun(ipt,n,ipt,ipt+n));
    return 0;
}