#include<stdio.h>
#include<stdlib.h>
int reverse(int n){
	int r=0;
	 while (n != 0)
   {
      r = r * 10;
      r = r + n%10;
      n = n/10;
   }
   return r;
	}
int main(){
int m , n, k;
scanf("%d %d %d",&m,&n,&k);
int l=0;
int r;
for(int i=m;i<=n;i++){
	r = reverse(i);
	if((r-i)%k==0||(i-r)%k==0){
		l=l+1;
		}
	}
	printf("%d",l);	
	
return 0;
}

