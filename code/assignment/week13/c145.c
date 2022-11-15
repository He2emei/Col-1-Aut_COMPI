#include<stdio.h>
#include<string.h>
struct Word{
	char wd[1007];
	int cnt;
}wds[1007];
int num,cnt;
char ipt[1007],tmp[1007];
int main(){
	gets(ipt);
	for(int i=0;ipt[i]!='#'&&ipt[i]!=0;i++){
		if(ipt[i]!=' '){
			int j;
			for(j=0;ipt[i+j]!=' ';j++){
				tmp[j]=ipt[i+j];
			}
			tmp[j]=0;
			int vis=0;
			for(int k=1;k<=cnt;k++){
				if(strcmp(tmp,wds[k].wd)==0){
					wds[k].cnt++;
					vis=1;
					break;
				}
			}
			if(!vis){
				wds[++cnt].cnt=1;
				strcpy(wds[cnt].wd,tmp);
			}
			i+=j;
		}
	}
  int ovis=0;
  for(int i=1;i<=cnt;i++){
    if(ovis) printf(" ");
    printf("%s-%d",wds[i].wd,wds[i].cnt);
  	ovis=1;
  }
	return 0;
}