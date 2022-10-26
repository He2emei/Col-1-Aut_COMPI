#include<stdio.h>
int y,n;

int isleap(int x){
    if(x%400==0) return 1;
    if(x%100==0) return 0;
    if(x%4==0) return 1;
    return 0;
}

int main(){
    scanf("%d%d",&y,&n);
    for(int i=y;n;i++){
        if(isleap(i)) n--;
        if(!n){
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}