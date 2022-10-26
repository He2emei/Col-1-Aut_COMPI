#include<stdio.h>

int main(){
    int a=2,b=1;
    int n;
    double ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans+=1.0*a/b;
        int c=a;
        a=a+b;
        b=c;
    }
    printf("%.4lf",ans);
    return 0;
}