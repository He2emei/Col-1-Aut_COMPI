#include<stdio.h>

char ipt[107];
struct cha{
    char c;
    int cnt;
}node[37];

int main(){
    gets(ipt);
    for(int i=0;i<26;i++){
        node[i].c=(char)(i+'A');
    }
    for(int i=0;ipt[i];i++){
        if(ipt[i]>='A'&&ipt[i]<='Z'){
            node[(int)(ipt[i]-'A')].cnt++;
        }
        else if(ipt[i]>='a'&&ipt[i]<='z'){
            node[(int)(ipt[i]-'a')].cnt++;
        }
    }
    for(int i=0;i<26;i++){
        for(int j=i-1;j>=0;j--){
            if(node[j+1].cnt<=node[j].cnt) break;
            struct cha x=node[j+1];
            node[j+1]=node[j];
            node[j]=x;
        }
    }
    int vis=0;
    for(int i=0;i<26;i++){
        if(vis) printf(" ");
        printf("%c-%d",node[i].c,node[i].cnt);
        vis=1;
    }
    return 0;
}