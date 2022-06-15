/* Criação de um simulador assembly em C para a primeira verificação de aprendizagem da disciplina de IP */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//definição de constantes

#define A 1
#define B 2
#define C 3
#define D 4
#define MEM 5
#define REG 6
#define CONS 7

//definição de variáveis globais

int RA = 0, RB = 0, RC = 0, RD = 0;
int memoria[25] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void imprimir_memoria (){ //imprimir a memória
    int i;

    printf ("\nRegistradores: A = %d  B = %d  C = %d  D = %d\n", RA, RB, RC, RD);
    printf("Memória de dados: ");

    for (i = 0; i < 25; i++){
       printf ("%d ", memoria[i]);
    }
       printf ("\n");
}

int tipo_operador(char *op){ //retornar o tipo de operador que está sendo utilizado

    if (op[0] == '['){
        return MEM;
    }
    if (op[0] >= '0' && op[0] <= '9'){
        return CONS;
    }
    else {
        return REG;
    }
}

int* pnt_registrador(char *r){ //atualização dos registradores
    int *pnt;

    if (r[0] == 'A'){
        pnt = &RA;
    }
    if (r[0] == 'B'){
        pnt = &RB;
    }
    if (r[0] == 'C'){
        pnt = &RC;
    }
    if (r[0] == 'D'){
        pnt = &RD;
    }
    return pnt;
}

int* pnt_memoria (char *m){ //atualização da memória
    int *pntm;
    int i, ac, fc, indice = 0;

    for (i = 3; i < 50; i++){
        if (m[i] == '['){
             ac = i;
        }
        if (m[i] == ']'){
            fc = i;
        }
    }

    for (i = ac+1; i < fc; i++){
        indice = (indice*10) + (m[i] - '0');
    } 

    pntm = &memoria[indice];

    return pntm;
}

int valor_operador(char *op) {
    int tipo, valor, *ptr;
    tipo = tipo_operador(op);

    if(tipo == CONS) {    
        valor = atoi(op);
    }

    if(tipo == REG){
        ptr = pnt_registrador(op);
        valor = *ptr;
    }
    
    if(tipo == MEM){
        ptr = pnt_memoria(op);
        valor = *ptr;
    }

    return valor;    
}

int * pnt_operador(char *op) {
    int tipo, *ptr;
    tipo = tipo_operador(op);

    if(tipo == REG){
        ptr = pnt_registrador(op);
    }
    
    if(tipo == MEM){
        ptr = pnt_memoria(op);
    }

    return ptr;    

}

int main(){
    char operador[4], p1[5], p2[5];
    char inst[50];
    int i, j, *pnt_p1, *pnt_p2;
    
    printf("*:･ﾟ✧ Bem vindo ao simulador *:･ﾟ\n");
    
    imprimir_memoria();

    while(1){   
                    
        fgets(inst, 50, stdin);
        strncpy(operador, inst, 3);
        operador[3] = '\0';

        if (0 == strcmp(operador, "HLT")){
            return 0;
        }

        else {
            for (i = 4; inst[i] != ','; i++){
                p1[i-4] = inst[i];
            }
            p1[i-4] = '\0';

            for (j = i + 1; inst[j] != '\0'; j++){
                p2[j-i-1] = inst[j];
            }
            p2[j-i-1] = '\0';

            if (0 == strcmp(operador, "MOV")){
                 pnt_p1 = pnt_operador(p1);
                *pnt_p1 = valor_operador(p2);
            }
            if (0 == strcmp(operador, "ADD")){
                 pnt_p1 = pnt_operador(p1);
                *pnt_p1 = valor_operador(p1) + valor_operador(p2);
            }
        }

    imprimir_memoria();

    }

    return 0;
}
