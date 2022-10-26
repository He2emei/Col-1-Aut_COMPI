#include<stdio.h>
const int N=4;
char x[4];
int main(){
    for(int i=1;i<=4;i++){
        scanf("%c",&x[i]);
        printf("%c %d %c\n",x[i],(int)x[i],x[i]+1);
    }
    return 0;
}