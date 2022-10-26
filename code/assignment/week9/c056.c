#include<stdio.h>
int y,m;
char ipt[1000];
int tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    gets(ipt);
    int i;
    for(i=0;ipt[i]!=',';i++){
        y*=10;
        y+=ipt[i]-'0';
    }
    for(i++;ipt[i]!=0;i++){
        m*=10;
        m+=ipt[i]-'0';
    }
    if(m==2&&y%4==0){
        printf("29");
        return 0;
    }
    printf("%d",tab[m]);
    return 0;
}