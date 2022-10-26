#include<stdio.h>
double a,b,c,ans;
int main(){
    scanf("%lf%lf%lf",&a,&b,&c);
    ans=a+b+c;
    printf("%g %d",ans,(int)(ans+0.5));
    return 0;
}