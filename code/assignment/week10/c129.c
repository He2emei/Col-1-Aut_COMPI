#include<stdio.h>
char ipt[1000];
int lst[100];
int main(){
    gets(ipt);
    for(int i=0;ipt[i];i++){
        if(ipt[i]>='A'&&ipt[i]<='Z'){
            lst[ipt[i]-'A']+=1;
        }
        if(ipt[i>='a'&&ipt[i]<='z']){
            lst[ipt[i]-'a']+=1;
        }
    }
    int vis=0;
    for(int i=0;i<26;i++){
        if(vis) printf(",");
        printf("%d",lst[i]);
        vis=1;
    }
    return 0;
}