#include <stdio.h>
#include <stdlib.h>


int main(){

	int aux=0,resp;
	char vogal[50],*nome;
	
	do{
		system ("color e0");
		printf("Digite 1 para iniciar e 0 para encerrar o programa: ");
		scanf("%d",&resp);
		printf("\n\n\n");
		
		if(resp!=0){
			printf("escreva algo para ser convertido em * : ");
			scanf("%s",vogal);
		
			printf("%s = ",vogal);
			aux=0;
			while(aux<50){
	
				if(vogal[aux]!=NULL){
					vogal[aux]='*';
				}
			aux++;
			}
			printf("%s\n\n",vogal);
			system("pause");
			system("cls");
		}
	}while(resp!=0);
	printf("PROGRAMA ENCERRADO..");
	return 0;
	
}

