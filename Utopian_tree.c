#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    


int a[100];

a[0]=1;
a[1]=2;
int i;
for(i=2;i<100;i++){
if(i%2==0){
	a[i]=a[i-1]+1;
	}
	else{
	a[i]=2*a[i-1];
		}}
int t,e[10];
scanf("%d",&t);
for(i=0;i<t;i++){
 scanf("%d",&e[i]);
	}


for(i=0;i<t;i++){
	printf("%d\n",a[e[i]]);
	}



    return 0;
}

