#include<stdio.h>
#include<stdbool.h>
int m,n;
int main(){
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++){
        if(i%7==0){
            printf("%d��7�ı���\n",i);
        }
        int t=i;
        while(t){
            if(t%10==7){
                printf("%d�Ǵ�7����\n",i);
                break;
            }
            t/=10;
        }
    }
    return 0;
}