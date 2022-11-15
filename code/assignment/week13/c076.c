#include<stdio.h>
int n;
int ipt[1007];

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&ipt[i]);
        for(int j=i-1;j>0;j--){
            if(ipt[j+1]>=ipt[j]) break;
            int x=ipt[j]; ipt[j]=ipt[j+1]; ipt[j+1]=x;
        }
    }
    printf("%d",ipt[1]);
    for(int i=2;i<n;i++){
        if(i==(n+1)/2){
            printf(" %d",ipt[n]);
            continue;
        }
        printf(" 0");
    }
    printf(" %d",ipt[(n+1)/2]);
    return 0;
}