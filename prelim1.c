#include<stdio.h>
#include<string.h>
int main(){
	char x[50],y[50];
	scanf("%s",x);
	for(int i=strlen(x)-1,j=0;i>=0;i--,j++){
		y[j]=x[i];
		
	}
	if(strcmp(x,y)==0)
		printf("1");
	else printf("0");
	return 0;
}
