#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n ,k;
	scanf("%d %d",&n,&k);
	 int *c = malloc(sizeof(int) * n);
	for(int i=0;i<n;i++)
    {
	scanf("%d",&c[i]);
	}
	int s=0;
    for(int i=0;i<n;i++){
		s =s+ c[i];
			}
		s = s-c[k];
	int bc;
	scanf("%d",&bc);
	if(bc>s/2){
		printf("%d",bc-s/2);}
		else{
			printf("Bon Appetit");
			}
			
    return 0;
}
