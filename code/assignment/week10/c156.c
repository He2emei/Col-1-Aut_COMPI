#include<stdio.h>
#include<string.h>

int cnt[1007];
char ipt[1007];

int main(){
    gets(ipt);
    for(int i=1;ipt[i+1];i++){
        cnt[(int)ipt[i]]++;
    }
    printf("%c",ipt[0]);
    for(int i=126;i>=32;i--){
        while(cnt[i]){
            printf("%c",(char)i);
            cnt[i]--;
        }
    }
    printf("%c",ipt[strlen(ipt)-1]);
    return 0;
}