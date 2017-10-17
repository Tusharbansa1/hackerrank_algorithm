
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; // house start
    int t; // house end
    scanf("%d %d",&s,&t);
    int a; // tree start
    int b; // tree end
    scanf("%d %d",&a,&b);
    int m; // no. of apple
    int n; // no.of oranges
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
       
    }int i,d,e,r,l;
    l=0;
    for(i=0;i<m;i++){
		d=0;
		d = a+apple[i];
	if(d<=t && d>=s){
	l=l+1;
		}
		}
		r=0;
	for(i=0;i<n;i++){
		e=0;
		e=b+orange[i];
		if(e<=t && e>=s){
		r=r+1;
		}	
		}
		
	printf("%d\n%d",l,r);	
	return 0;
}

