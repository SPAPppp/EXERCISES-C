#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ABC 26

int main (){
	
	char sen[100], code[100];
	char alphabet[ABC]={'w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','k','l','z','x','c','v','b','n','m'};
	int l, i;
	bool notc=true;
	
	printf("codification ON...\n");
	scanf("%[^\n]s",sen);
	
	for(l=0;l<strlen(sen);l++){
		notc=true;
		for(i=0;i<ABC;i++){
			if (sen[l]==alphabet[i]){
				code[l]=alphabet[ABC-i];
				notc=false;
			}
		}
		if (notc==true){
			code[l]=sen[l];
		}
	}
	
	printf("codification done\n");
	printf("%s",code);
	
return 0;
}
