//Program To Print Rhombus Star Pattern
#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("Enter the no. of rows: ");		//Taking Limit Input
	scanf("%d",&n);
	for(i=1;i<=n;i++){		//For Rows
		for(j=1;j<n;j++){		//For Columns
				printf(" ");
		}
		for(k=1;k<=5;k++){
			printf("*");
		}
		printf("\n");
}
}
