#include<stdio.h>
char x;
int main(){
    scanf("%c",&x);
    if(x=='A'){
        printf("%c%c%c",'Z','A','B');
    }
    else if(x=='Z'){
        printf("%c%c%c",'Y','Z','A');
    }
    else{
        printf("%c%c%c",x-1,x,x+1);
    }
    return 0;
}