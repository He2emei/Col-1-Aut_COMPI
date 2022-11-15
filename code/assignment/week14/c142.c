#include<stdio.h>
struct Rnum{
	int top;
	int bot;
	int syn;
}rnum[1007];
int num,cnt;
char ipt[1007],tmp[1007];
int mygcd(int a,int b){
	int c;
	if(a<b){
		c=b; b=a; a=c;
	}
	while(a%b){
		c=a-b;
		a=b; b=c;
		if(a<b){
		c=b; b=a; a=c;
		}
	}
	return b;
}
int main(){
	scanf("%d",&num);
	gets(ipt);
	for(int i=0;ipt[i];i++){
		if(ipt[i]!=' '){
			cnt++;
			if(ipt[i]=='-'){
				rnum[cnt].syn=1;
				i++;
			}
			while(ipt[i]!='/'){
				rnum[cnt].top=rnum[cnt].top*10+(int)(ipt[i]-'0');
				i++;
			}
			i++;
			while(ipt[i]!=' '&&ipt[i]!=0){
				rnum[cnt].bot=rnum[cnt].bot*10+(int)(ipt[i]-'0');
        i++;
			}
		}
	}
	rnum[0].bot=1;
	for(int i=1;i<=cnt;i++){
		if(rnum[0].bot%rnum[i].bot){
			rnum[0].bot=rnum[i].bot*rnum[0].bot/mygcd(rnum[i].bot,rnum[0].bot);
		}
	}
	for(int i=1;i<=cnt;i++){
		int tmpn=rnum[i].top*rnum[0].bot/rnum[i].bot;
		if(rnum[i].syn) tmpn=-tmpn;
		rnum[0].top+=tmpn;
	}
	if(rnum[0].top<0){
		rnum[0].top=-rnum[0].top;
		rnum[0].syn=1;
	}
	if(rnum[0].syn){
		printf("-");
	}
	int inte=rnum[0].top/rnum[0].bot;
	rnum[0].top%=rnum[0].bot;
	if(!rnum[0].top){
		printf("%d",inte);
      	return 0;
	}
  	int gcd=mygcd(rnum[0].top,rnum[0].bot);
	rnum[0].top/=gcd; rnum[0].bot/=gcd;
	if((!inte)&&rnum[0].top){
		printf("%d/%d",rnum[0].top,rnum[0].bot);
	}
	else{
		printf("%d %d/%d",inte,rnum[0].top,rnum[0].bot);
	}
	return 0;
}