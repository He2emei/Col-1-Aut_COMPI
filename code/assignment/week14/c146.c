#include<stdio.h>
char ipt[207];
int vis[307];
int main(){
  gets(ipt);
  for(int i=0;ipt[i];i++){
    if(ipt[i]==' ') continue;
    if(ipt[i]>='a'&&ipt[i]<='z'){
      vis[(int)(ipt[i]+'A'-'a')]=1; continue;
    }
    vis[(int)ipt[i]]=1;
  }
  for(int i=0;i<256;i++){
    if(vis[i]){
      printf("%c",(char)i);
    }
  }
  return 0;
}