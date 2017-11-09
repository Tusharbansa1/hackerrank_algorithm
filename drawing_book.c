#include<stdio.h>
int main(){
int n,p;
scanf("%d %d",&n,&p);
	if(n%2==0){
		n =n +1;
		}
	if(p%2==0){
		p = p+1;
		}
	int a,b;
	a = (p-1)/2;	
	b = (n-p)/2;
	if(a>=b){
		printf("%d",b);
		}
	else{
		printf("%d",a);
		}	
return 0;
}
