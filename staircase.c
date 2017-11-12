#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int i,a,b;
    for(a=1;a<=n;a++){
        for(b=1;b<=n;b++){
            if(a<=n-b){
                printf(" ");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
    
    
    return 0;
    
}

