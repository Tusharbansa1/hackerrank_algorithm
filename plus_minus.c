#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int p , ne ,z;
    p = ne = z = 0;
    float p1 ,n1 , z1;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0)
            {
            ne = ne+1;
        }
        if(arr[i]>0){
            p = p+1;
        }
        if(arr[i]==0){
            z = z+1;
        }
    }
    p1 = (float)p/(float)n;
    n1 = (float)ne/(float)n;
    z1 = (float)z/(float)n;
    printf("%f\n%f\n%f",p1,n1,z1);
    return 0;
}

