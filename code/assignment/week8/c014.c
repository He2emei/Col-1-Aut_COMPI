#include<stdio.h>
#include<stdbool.h>
int m,n;
int main(){
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++){
        if(i%7==0){
            printf("%d是7的倍数\n",i);
        }
        int t=i;
        while(t){
            if(t%10==7){
                printf("%d是带7的数\n",i);
                break;
            }
            t/=10;
        }
    }
    return 0;
}