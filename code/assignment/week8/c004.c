#include<stdio.h>
int lst[10];
int main(){
    scanf("%d",&lst[0]);
    int t=4;
    while(lst[0]){
        lst[t]=lst[0]%10;
        lst[0]/=10; t--;
    }
    for(int i=1;i<=4;i++){
        lst[i]+=5;
        lst[i]%=10;
    }
    for(int i=4;i>0;i--){
        printf("%d",lst[i]);
    }
    return 0;
}