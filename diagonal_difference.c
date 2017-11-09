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
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    int p , s,r,i;
    s=0;
    p=0;
    for(i=n-1;i>=0;i--){
        s =s+a[i][i];
    }
    for(i=n-1;i>=0;i--){
        p =p+a[n-i-1][i];
    }
    r =s-p;
    if(r<0)
 {       r = 0-r;
    printf("%d",r);
}else{
        printf("%d",r);
    }
    return 0;
}

