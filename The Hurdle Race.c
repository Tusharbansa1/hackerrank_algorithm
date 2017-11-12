#include<stdio.h>

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	int m = a[0]	;
	for(int i=0;i<n;i++){
		if(m<a[i]){
			m=a[i];
			}
		}
	if(m-k>0){
		printf("%d",m-k);
		}
		else{
			printf("0");
			}
	
	return 0;
	}

