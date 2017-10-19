#include<stdio.h>
int main(){
long int s;
int m,n;
int x,t;
x=0;
t=0;
scanf("%ld %d %d",&s,&m,&n)	;
int a[m],b[n];
for(int i=0;i<m;i++){
	scanf("%d",&a[i]);
	}
for(int i=0;i<n;i++){
	scanf("%d",&b[i]);
	}	
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		x = a[i] + b[j];
		if(x<=s && t<x){
			t=x;}
		}if(t==x){break;}
	}
if(t==0){
	printf("-1");
	}
	else{
		printf("%d",t);
		}
		
return 0;
}
