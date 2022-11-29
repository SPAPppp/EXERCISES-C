// entered a word verify if it's palindrome
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main ()
{
	int len, start = 0, end;
	bool pal = 1 ;
	char x [50] = "" ;
	
	printf("give me a word and let's see if it's palindrome\n") ;
	scanf("%s",x) ;
	
	len = strlen(x) ;
	end = len ;

	while(start < len ) {
		if (x[start] == x[end-1] ) start ++, end -- ; 
		else pal = 0, start = len ;
	}
	if (pal == 1 )	printf("the word is palindrome") ;
	else printf("the word isn't palindorme") ;
	
  return 0;
}
