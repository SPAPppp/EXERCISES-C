# include <stdio.h>

int main(){
	
	int array[10]={13,67,34,67,51,72,84,73,49,95}, x, y, i, sum;
			
		for(i=0;i<10;i++){
			printf("|");
			printf(" %d ",array[i]);
			printf("|");
		}
		printf("\n");
		for(i=0;i<10;i++){
			printf("|{");
			printf(" %d",i);
			printf("}|");
		}
		printf("\n");
	
	while(1){
		printf("give an array index to have back the opposite number: ");
		scanf("%d",&x);
		printf("\n");
		
		sum=array[x]+array[9-x];
		printf("the sum is %d",sum);

	}
	
	
return 0;
}
