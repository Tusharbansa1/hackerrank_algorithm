#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
	long int t,s;
	long int x[5];
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
     x[0]=a;
     x[1]=b;
     x[2]=c;
     x[3]=d;
     x[4]=e;
     t=s=x[0];
     //s is max  and t is min
     for(int i=0;i<5;i++){
     if(t>x[i]){
		 t=x[i];}
	if(s<x[i]){
		s=x[i];}
	}
	long int max = a+b+c+d+e-t;
    long int min = a+b+c+d+e-s;
    printf("%lld %lld",min,max);
    return 0;
}

