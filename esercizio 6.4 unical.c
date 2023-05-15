/*
Scrivere un programma in linguaggio C che legga una frase introdotta da tastiera. La
frase è terminata dall’introduzione del carattere di invio. La frase contiene sia caratteri
maiuscoli che caratteri minuscoli, e complessivamente al più 100 caratteri. Il programma
deve svolgere le seguenti operazioni:
• visualizzare la frase inserita
• costruire una nuova frase in cui il primo carattere di ciascuna parola nella frase di
partenza è stato reso maiuscolo. Tutti gli altri caratteri devono essere resi minuscoli.
Il programma deve memorizzare la nuova frase in una opportuna variabile
• visualizzare la nuova frase.
Ad esempio la frase cHe bElLA gIOrnaTa diviene Che Bella Giornata
*/
#include <stdio.h>
#include <stdbool.h>

#define ABC 26

int main(){
	
	char sen[100];
	char low[ABC]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
	char high[ABC]={'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
	int i, l, d;
	bool ver=false;
	
	printf("dammi una frase\n");
	scanf("%[^\n]s",sen);
	
	for(l=0;l<ABC;l++){
		if(sen[0]==low[l]){
			sen[0]=high[l];	
		}
	}
	
	for(l=1;l<100;l++){
	ver=false;
		if(sen[l-1]==' '){
			for(i=0;i<ABC;i++){
				if(sen[l]==low[i]){
					sen[l]=high[i];
				}
			}
		} 
		else{
			for(i=0;i<ABC;i++){
				if(sen[l]==high[i]){
					sen[l]=low[i];
				}
			}
		}
		
	}
	
	printf("%s",sen);
return 0;
}
