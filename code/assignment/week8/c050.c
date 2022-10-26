#include<stdio.h>
double a,b,c;
int main(){
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        printf("YES");
    }
    else printf("ERROR DATA");
    return 0;
}