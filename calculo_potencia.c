#include <stdio.h>
#include <math.h>

int menu1();
int menu2();
float potencia_ativa1(float x, float y, float z);
float potencia_ativa2(float r, float s);
float potencia_aparente(float i, float j);
float potencia_reativa(float a, float b);

int main(int argc, char const *argv[]){
    
    int option1;
    int option2;
    int chama_menu1;
    float volts;
    float corrente;
    float cos;
    float poten_ativa1;
    float poten_ativa2;
    float poten_aparente;
    float poten_reativa;
    float va1, va2;
    float w1, var2;

    do{

        option1 = menu1();

        switch(option1){
        case 1:

            do{
                option2 = menu2();

                switch(option2){
                case 1:
                    printf("\n-----------------------------\n\n");

                    printf("Digite quantos volts o motor utiliza: ");
                    scanf("%f", &volts);

                    printf("\nDigite qual a corrente ultilizada pelo motor: ");
                    scanf("%f", &corrente);

                    printf("\nDigite o coseno do motor: ");
                    scanf("%f", &cos);

                    printf("\n-----------------------------\n\n");

                    poten_ativa1 = potencia_ativa1(volts, corrente, cos);

                    printf("A potência ativa desse motor é de: %.2f", poten_ativa1);

                    printf("\n-----------------------------\n\n");

                    break;

                case 2:
                    printf("\n-----------------------------\n\n");

                    printf("Digite a potência aparente(VA): ");
                    scanf("%f", &va2);

                    printf("\nDigite a potência reativa(VAR): ");
                    scanf("%f", &var2);

                    printf("\n-----------------------------\n\n");

                    poten_ativa2 = potencia_ativa2(va2, var2);

                    printf("A potência ativa desse motor é de: %.2f", poten_ativa2);

                    printf("\n-----------------------------\n\n");

                    break;

                case 3:
                    chama_menu1 = menu1();
                
                    break;
                }
            
            }while(option2 >= 0  && option2 <= 3);
            
            if(option2 == 0){
                printf("\n\n=====SISTEMA ENCERRADO=====\n\n");
            }else{
                if( (option2 > 3) || (option2 < 0) ){
                    printf("\n-=-=-=-=-=-OPÇÃO INVÁLIDA-=-=-=-=-=-\n\n");
                }
            }
            
            break;
            
        
        case 2:
            printf("\n-----------------------------\n\n");

            printf("Digite quantos volts o motor utiliza: ");
            scanf("%f", &volts);

            printf("\nDigite qual a corrente ultilizada pelo motor: ");
            scanf("%f", &corrente);

            printf("\n-----------------------------\n\n");

            poten_aparente = potencia_aparente(volts, corrente);

            printf("A potência aparente desse motor é de: %.2f", poten_aparente);

            printf("\n-----------------------------\n\n");

            break;

        case 3:
            printf("\n-----------------------------\n\n");

            printf("Digite qual a potência aparente(VA): ");
            scanf("%f", &va1);

            printf("\nDigite qual é a potência ativa(W): ");
            scanf("%f", &w1);

            poten_reativa = potencia_reativa(va1, w1); 

            printf("A potência reativa desse motor é de: %.2f", poten_reativa);

            printf("\n-----------------------------\n\n");

            break;
        }
        
    }while(option1 >= 0  && option1 <= 3);

    if(option1 == 0){
        printf("\n\n=====SISTEMA ENCERRADO=====\n\n");
    }else{
        if( (option1 > 3) || (option1 < 0) ){
            printf("\n-=-=-=-=-=-OPÇÃO INVÁLIDA-=-=-=-=-=-\n\n");
        }
    }

    return 0;
}

int menu1(){
    int option1;

    printf("\t--------------------------------------------------------------------\n\n");
    printf("\t=====Selecione o que deseja calcular=====\n");
    printf("\t1 - Calcular a potência ativa(W)......:\n");
    printf("\t2 - Calcular a potência aparente(VA).........:\n");
    printf("\t3 - Calcular a potência reativa(VAR)................:\n");
    printf("\t0 - Sair.\n\n");
    printf("Digite a opção desejada...: ");
    scanf("%d", &option1);

    return option1;
}

int menu2(){
    int option2;

    printf("\t--------------------------------------------------------------------\n\n");
    printf("\t=====Selecione qual a formula que deseja calcular=====\n");
    printf("\t1 - W = V * I * COSENO...........:\n");
    printf("\t2 - W = sqrt( ( (pow(VA, 2)) - (pow(VAR,2)) ) )..............:\n");
    printf("\t3 - Voltar.................:\n");
    printf("\t0 - Sair.............:\n\n");
    printf("Digite a opção desejada...: ");
    scanf("%d", &option2);

    return option2;
}

float potencia_ativa1(float x, float y, float z){
    float poten_ativa1;

    poten_ativa1 = x * y * z;

    return poten_ativa1;
}

float potencia_ativa2(float r, float s){
    float poten_ativa2;

    poten_ativa2 = sqrt( ( (pow(r, 2)) - (pow(s,2)) ) );

    return poten_ativa2;
}

float potencia_aparente(float i, float j){
    float poten_aparente;

    poten_aparente = i * j;

    return poten_aparente;
}

float potencia_reativa(float a, float b){
    float poten_reativa;

    poten_reativa = sqrt( ( (pow(a, 2)) - (pow(b, 2)) ) );

    return poten_reativa;
}