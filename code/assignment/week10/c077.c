#include<stdio.h>

char ipt[107];
int l,num;

int main(){
    gets(ipt);
    for(int i=0;ipt[i];i++){
        int j=0;
        while(ipt[i+j+1]==ipt[i]) j++;
        if(j>num){
            l=i; num=j;
        }
    }
    printf("%c %d %d",ipt[l],num+1,l);
    return 0;
}