#include <stdio.h>
#include <stdbool.h>

int main () {
	
	int N,
		p, s,
		si, i, w, c;
		
	printf("Dammi un numero multiplo di 6 e ci faro' un regalo ");
	scanf("%d",&N);
	
	while(N%6!=0){
		printf("il numero deve essere un multiplo di 6\nritenta ");
		scanf("%d",&N);
	}
	
	s=N/6;

	for(si=s; si>0; si--){
		for (i=0; i<si-1; i++){
			printf(" ");
		}
		printf("/");
		for(i=(s-si)*2; i>0; i--){
			printf("\\");
			if(si==1 && i==(s-si)*2){
				c=i;
			}
		}
		printf("\\");
		for(i=(si+s-1)*2; i>0; i--){
			printf(" ");
		}
		printf("/");
		for(i=(s-si)*2; i>0; i--){
			printf("/");
		}
		printf("\\");
		
		printf("\n");
	}
	for(si=s; si>0; si--){
		for(i=(s-si); i>0; i--){
			printf(" ");
		}
		printf("\\");
		
		for(i=c+1; i>0; i--){
			printf("\\");
		}
		printf("\\");
		
		for (i=0; i<(si-1)*2; i++){
			printf(" ");
		}
		printf("/");
		
		for(i=c+1; i>0; i--){
			printf("/");
		}
		printf("/");
		
		
		printf("\n");
	}
	
	for(p=N/6; p>0; p--){
		for(i=(N-2)/2; i>=0; i--){
		printf("|");
			for(i=(N-4)/2; i>0; i--){
				printf("*");
			}
			printf("||");
		}
		for(i=(N-2)/2; i>=0; i--){
			for(i=(N-4)/2; i>0; i--){
				printf("*");
			}
			printf("|");
		}
		printf("\n");
	}
	
	for(p=2; p>0; p--){
		for(i=(N-2)/2; i>=0; i--){
		printf("|");
			for(i=(N-4)/2; i>0; i--){
				printf("-");
			}
			printf("||");
		}
		for(i=(N-2)/2; i>=0; i--){
			for(i=(N-4)/2; i>0; i--){
				printf("-");
			}
			printf("|");
		}
		printf("\n");
	}	
		
	for(p=N/6; p>0; p--){
		for(i=(N-2)/2; i>=0; i--){
		printf("|");
			for(i=(N-4)/2; i>0; i--){
				printf("*");
			}
			printf("||");
		}
		for(i=(N-2)/2; i>=0; i--){
			for(i=(N-4)/2; i>0; i--){
				printf("*");
			}
			printf("|");
		}
		printf("\n");
	}

}
