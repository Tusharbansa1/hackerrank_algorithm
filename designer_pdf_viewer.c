#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
	int n =26;
    int *h = malloc(sizeof(int) * n);
    for(int h_i = 0; h_i < n; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* word = (char *)malloc(512000* sizeof(char));
    scanf("%s",word);
    int l = strlen(word);
    int s[50];
    int p[50];
    for(int i=0;i<l;i++){
		s[i]=word[i];
		
		}
	for(int i=0;i<l;i++){
		p[i] = h[s[i]-97];
	}
	int t;
	t=p[0];
	for(int i=0;i<l;i++){
		if(t<p[i]){
			t=p[i];
			}
			
		}
		
	printf("%d",l*t);
		
    return 0;
}

