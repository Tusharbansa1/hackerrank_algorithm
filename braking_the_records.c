#include<stdio.h>

int main(){
	
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
int p=a[0];
int ni=a[0];
int x=0;
int y=0;
for(int i=0;i<n;i++){
	if(p>a[i]){
		p=a[i];
		x=x+1;
		}
	if(ni<a[i])	{
		ni= a[i];
		y=y+1;
		}
	}
printf("%d %d",y,x)	;
	
return 0;
}
