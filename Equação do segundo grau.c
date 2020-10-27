#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
   int main()
{	
		system("color e0");
        setlocale(LC_ALL, "Portuguese");
		
        int A, B, C,resp;
        double DELTA, X1, X2;
        float R1;
        float R2;
        char sim;


        printf("                          |********PROGRAMA PARA CALCULAR EQUAÇÃO DO SEGUNDO GRAU************|\n");
        printf("                          |******************************************************************|\n\n");

        do{

        printf("Qual o A da equação? \n");
        scanf("%d", &A);
        printf("\n");
        if(A==0){
                printf("Impossivel calcular\n\n");
        }else{

            printf("Qual o B da equação? \n");
            scanf("%d", &B);
            printf("\n");

            printf("Qual o C da equação? \n");
            scanf("%d", &C);
            printf("\n");

            DELTA = pow(B,2)-4*A*C;

            if(DELTA>=0){
                    printf("O Delta da função é %f\n",DELTA);
                    printf("\n");
                    X1= (-B+sqrt(DELTA))/(2*A);
            X2= (-B-sqrt(DELTA))/(2*A);
            printf("X1= %f e X2= %f\n", X1,X2);
			printf("\n");
            R1= (X1*10)-X1;
            R2= (X2*10)-X2;

            printf("Quer ver o resultado em fração? Digite (S) pra sim ou (N) pra não \n");
            scanf("%s", &sim);
			printf("\n");

            switch (sim)
	{
            case 'S':
                printf("X1 = %2.0f/9 e X2 = %2.0f/9\n\n", R1,R2);
                printf("\n");
                break;
            case 's':
                printf("X1 = %2.0f/9 e X2 = %2.0f/9\n\n", R1,R2);
                printf("\n");
                break;
            case 'N':
            		return 0;
                break;
            case 'n':
            		return 0;
                break;
            default:
                printf("opção invalida\n\n");
	}
            }else {
            printf("Impossivel calcular\n\n");
        }
        }
        printf("Digite (1) para reiniciar ou qualquer outra tecla para sair \n");
         scanf("%d",&resp);
         printf("\n\n\n");
         system("cls");
        }while (resp==1);


           system ("pause");
            return 0;
	}


