#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    int a =x1;
    int b =x2;
    if(x1<x2){
		if(v1>v2){for(int i=0 ; i<10000 ;i++){
					x2 = x2 + v2;
					x1 = x1 + v1;
					if(x1 == x2){
				printf("YES");
				break ;
								}
											}
						}
		else{
			printf("NO");
			}	
		}
		if(x1>x2){
			if(v2>v1){
				for(int i=0 ; i<10000 ;i++){
					x2 = x2 + v2;
					x1 = x1 + v1;
					if(x1 == x2){
				printf("YES");
				break ;
								}
											}
						}
				else{
				printf("NO");
				}
			}
    if(a==b){
        if(v1!=v2){
            printf("NO");}
        else{
            printf("YES");
        }
    }
    return 0;
}
