#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2;
    int r =0;
    int s =0;
    scanf("%d %d %d",&b0,&b1,&b2);
    if(a0>b0){
        r = r+1;
    }
    if(b0>a0){
        s =s+1;
    }
    if(a1>b1){
        r =r+1;
    }
    if(b1>a1){
        s =s+1;
    }
    if(a2>b2){
        r =r+1;
    }
    if(b2>a2){
        s =s+1;
    }
    printf("%d %d",r,s);
    return 0;
}

