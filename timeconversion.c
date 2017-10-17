#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);
    
    if(time[8]==80){
		if(time[0]==49&&time[1]==50){
		time[8]=0;
		printf("%s",time);
		
		}else{
			time[0]=time[0]+1;
		time[1]=time[1]+2;
		time[8]=0;
		printf("%s",time);}
		}
		else{
			if(time[0]==49&&time[1]==50){
				time[0]=48;
				time[1]=48;
				}
			time[8]=0;
			printf("%s",time);
			
			}
    return 0;
}
