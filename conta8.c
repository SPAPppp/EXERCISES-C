//write a program, got 10 numbers, in the end, find the positions where are iserted a number 8
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main () {
	int i, nums [10], tv [10];
	
	for(i=0;i<=10;i++){
		printf("give me a number") ;
		scanf("%d",&nums[i]) ;
		if (nums[i] == 8) tv[i] = 8 ;
	}
	for(i=0; i<=10; i++) {
		if(tv[i] == 8) printf("was insert an 8 in the %d position\n",i) ;
	}

return 0;
}
