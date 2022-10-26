#include<stdio.h>
#include<math.h>
int x;
int main(){
    scanf("%d",&x);
    while(x<=0||x>1000){
        printf("%d\n",0);
        scanf("%d",&x);
    }
    printf("%d",(int)sqrt(x));
    return 0;
}