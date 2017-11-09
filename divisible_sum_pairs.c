#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int i , j ,r,t;
    r = 0;
    for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		t = a[i]+a[j];
	if(t%k==0){
	 r =r +1;	
	}	
	}
	}
	printf("%d",r);
    return 0;
}

