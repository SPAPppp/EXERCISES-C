#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (){
	
	char w [] = {'h','o','m','e'} ;	// correct word
	char l [] = " ";							// letter
	int i, e = 0;
	
	printf("4 words,\n \"where u live for ur all life\"\n") ;
	for (i = 0 ; i < strlen(w); i ++) 
	{
		printf("give the %d letter ",i+1) ;
		scanf("%s",l) ;
		if(l[0] == w[i]) 
		{
			printf("                \n     _________ \n     |       |  \n             |  \n             |  \n             |  \n             |  \n             |  \n             |  \n") ;
		}
		else
		{
			e ++ ;
			printf("ERROR\n") ;
			i -- ;
		}

		if (e == 1) printf("                \n     _________ \n     |       |  \n     O       |  \n             |  \n             |  \n             |  \n             |  \n             |  \n") ;
		if (e == 2) printf("                \n     _________ \n     |       |  \n     O       |  \n     |       |  \n             |  \n             |  \n             |  \n             |  \n") ;
		if (e == 3) printf("                \n     _________ \n     |       |  \n     O       |  \n    /|       |  \n             |  \n             |  \n             |  \n             |  \n") ;
		if (e == 4) printf("                \n     _________ \n     |       |  \n     O       |  \n    /|\\      |  \n             |  \n             |  \n             |  \n             |  \n") ;
		if (e == 5) printf("                \n     _________ \n     |       |  \n     O       |  \n    /|\\      |  \n    /        |  \n             |  \n             |  \n             |  \n") ;
		if (e == 6) {
			printf("                \n     _________ \n     |       |  \n     O       |  \n    /|\\      |  \n    / \\      |  \n             |  \n             |  \n             |  \nGAME OVER");
			break ;
		}
	}
	if (e < 6) printf("YOU WIN") ;
	return 0; 
}
