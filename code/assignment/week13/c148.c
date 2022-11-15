#include<stdio.h>
char ipt[107];
int cnt[37];
int main(){
  gets(ipt);
  for(int i=0;ipt[i];i++){
    if(ipt[i]>='a'&&ipt[i]<='z'){
      cnt[(int)(ipt[i]-'a')]++;
    }
  }
  for(int i=0;i<26;i++){
    for(int j=1;j<=cnt[i];j++){
      printf("%c",(char)('a'+i));
    }
  }
  return 0;
}