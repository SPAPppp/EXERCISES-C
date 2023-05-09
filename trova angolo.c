#include <stdio.h>
#define xy 2

int main(){
		
	int a1[xy], a2[xy], a3[xy], a4[xy];
	int i;
	
	printf("dammi tre angoli di un quadrato equiangolo e ti trovero il quarto\n");
	
	printf("angolo1:\n");
	scanf("%d",&a1[0]);
	scanf("%d",&a1[1]);
	
	printf("angolo2:\n");
	scanf("%d",&a2[0]);
	scanf("%d",&a2[1]);
	
	printf("angolo3:\n");
	scanf("%d",&a3[0]);
	scanf("%d",&a3[1]);

	if(a1[0]==a2[0])
		a4[0]=a3[0];
	else if(a2[0]==a3[0])
		a4[0]=a1[0];
	else
		a4[0]=a2[0];
		
	if(a1[1]==a2[1])
		a4[1]=a3[1];
	else if(a2[1]==a3[1])
		a4[1]=a1[1];
	else
		a4[1]=a2[1];
	
	printf("angolo4:\n %d \n %d",a4[0],a4[1]);

return 0;
}
