#include<stdio.h>
int n;
double x;
double poly(double m,double y){
    if(m==0) return 1;
    if(m==1) return y;
    return ((2*m-1)*y*poly(m-1,y)-(m-1)*poly(m-2,y))/m;
}
int main(){
    scanf("%d%lf",&n,&x);
    printf("%lf\n",poly(n,x));
    return 0;
}