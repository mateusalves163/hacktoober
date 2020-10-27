#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
   printf("                              |************PROGRAMA PARA DECOMPOR NÚMEROS EM CÉDULAS************|\n");
   printf("                              |*****************************************************************|\n");
    int N;
    int resp;
    do{
    	
	   printf("Digite o número: ");
	   scanf("%d",&N);
	   
	   if (N/100){
	   		printf("%d nota(s) de R$ 100,00\n",N/100);
	   	
	   }else{
	   		printf("0 nota(s) de R$ 100,00\n");
	   }
	   if(N%100/50){
	   		printf("%d nota(s) de R$ 50,00\n",(N%100)/50);
		
	   }else{
	   		printf("0 nota(s) de R$ 50,00\n");
	   }
	   if(N%100%50/20){
	   		printf("%d nota(s) de R$ 20,00\n",(N%100%50)/20);
	   }else{
	   		printf("0 nota(s) de R$ 20,00\n");
	   }
	   if(N%100%50%20/10){
	   		printf("%d nota(s) de R$ 10,00\n",(N%100%50%20)/10);
	   }else{
	   		printf("0 nota(s) de R$ 10,00\n");
	   }
	   if(N%100%50%20%10/5){
	   		printf("%d nota(s) de R$ 5,00\n",(N%100%50%20%10)/5);
	   }else{
	   		printf("0 nota(s) de R$ 5,00\n");
	   }
	   if(N%100%50%20%10%5/2){
	   		printf("%d nota(s) de R$ 2,00\n",(N%100%50%20%10%5)/2);
	   }else{
	   		printf("0 nota(s) de R$ 2,00\n");
	   }
	   if(N%100%50%20%10%5%2){
	   		printf("%d nota(s) de R$ 1,00\n\n",(N%100%50%20%10%5%2));
	   }else{
	   		printf("0 nota(s) de R$ 1,00\n\n");
	   }
	   
	   printf("DIGITE (1) PARA REINICIAR OU EM QUALQUER OUTRA TECLA PARA SAIR: ");
	   scanf("%d",&resp);
	   printf("\n\n");
}while (resp==1);
    printf("\n");
 
 	system("pause");
    return 0;
}
