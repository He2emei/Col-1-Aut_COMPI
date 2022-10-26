#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

char ipt[10][1000];

bool ismt(char *a,char *b){
    int i=0;
    for(i=0;a[i]!="\0"&&b[i]!="\0";i++){
        if(a[i]>b[i]) return true;
        if(a[i]<b[i]) return false;
    }
    if(b[i]=='\0') return true;
    return false;
}

int main(){
    for(int i=1;i<=5;i++){
        scanf("%s",ipt[i]);
    }
    int _max=1,_min=1;
    for(int i=2;i<=5;i++){
        if(ismt(ipt[_min],ipt[i])) _min=i;
        if(ismt(ipt[i],ipt[_max])) _max=i;
    }
    printf("max:%s min:%s",ipt[_max],ipt[_min]);
    return 0;
}