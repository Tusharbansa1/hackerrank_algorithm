#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
			}
		}
	int A,B;
	for(int i=0;i<n;i++){
		A=0;
		B=0;
		A = a[i][0] - a[i][2];
		B = a[i][1] - a[i][2];
		if(A<0){
			A = -A;
			}
		if(B<0)	{
			B = -B;
			}
		if(A>B){
			printf("Cat B\n");
			}
		if(A<B)	{
			printf("Cat A\n");
			}
		if(A==B)	{
			printf("Mouse C\n");
			}
		}
	
	}
