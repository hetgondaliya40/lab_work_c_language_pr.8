#include<stdio.h>
void het(){
	int a[5][5];
	int *p,i,j,n;
	
	
	printf("enter any number :- ");
	scanf("%d",&n);
	

		p = &a;	


	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("enter array element :- ");
				scanf("%d",&a[i][j]);
	}
}

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d  ",(*(p+a[i][j]))*(*(p+a[i][j]))*(*(p+a[i][j])),(p+a[i][j]));
		}
		printf("\n");
	}
}
void main(){
	het();
	
	
}
