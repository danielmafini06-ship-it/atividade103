#include <stdio.h>

void imprimirVetor(int senhas[], int tamanho){
    printf("[");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", senhas[i]);
    }
    printf("]\n");
}
void bubbleSortRaioX(int senhas[], int tamanho){
   printf("Estado inicial da fila: ");
   imprimirVetor(senhas, tamanho);
   for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho - i - 1; j++){
            if(senhas[j] > senhas[j + 1]){
                int aux = senhas[j];
                senhas[j] = senhas[j + 1];
                senhas[j + 1] = aux;
            }
        }
        printf("Fim da passada %d: ", i + 1);
        imprimirVetor(senhas, tamanho);
    }
}
int main(){
    int senhas[] = {82, 45, 12, 78, 23};
    int tamanho = sizeof(senhas) / sizeof(senhas[0]);
    bubbleSortRaioX(senhas, tamanho);
    return 0;
}
