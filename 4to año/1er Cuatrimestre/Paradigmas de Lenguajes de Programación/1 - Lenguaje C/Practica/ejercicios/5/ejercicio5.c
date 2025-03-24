#include <stdio.h>
#include <stdlib.h>

float media (int *numeros, int tamanio){
    int suma = 0;
    for (int i = 0; i < tamanio; i++){
        suma += numeros[i];
    }
    return (float) suma / tamanio;
}

int mayorValor(int *numeros, int tamanio){
    int mayorValor = numeros[0];
    for (int i = 1; i < tamanio; i++){
        if (mayorValor < numeros[i]){
            mayorValor = numeros[i];
        }
    }
    return mayorValor;
}

int menorValor(int *numeros, int tamanio){
    int menorValor = numeros[0];
    for (int i = 1; i < tamanio; i++){
        if (menorValor > numeros[i]){
            menorValor = numeros[i];
        }
    }
    return menorValor;
}

int* mayorValorPuntero(int *numeros, int tamanio){
    int *mayorValor = &numeros[0];
    for (int i = 1; i < tamanio; i++){
        if (*mayorValor < numeros[i]){
            mayorValor = &numeros[i];
        }
    }
    return mayorValor;
}

int* menorValorPuntero(int *numeros, int tamanio){
    int *menorValor = &numeros[0];
    for (int i = 1; i < tamanio; i++){
        if (*menorValor > numeros[i]){
            menorValor = &numeros[i];
        }
    }
    return menorValor;
}

void valoresEstadisticos(int *numeros, float *valores, int tamanio){
    valores[0] = menorValor(numeros, tamanio);
    valores[1] = mayorValor(numeros, tamanio);
    valores[2] = media(numeros, tamanio);
}

int main(){
    int numeros[] = {6,7,6,8,8,9,6,7,10,10};
    float valores[3];
    int tamanio = sizeof(numeros) / sizeof(numeros[0]);
    valoresEstadisticos(numeros, valores, tamanio);
    printf("El valor minimo es %f, El valor maximo es %f y la media es %f\n", valores[0], valores[1], valores[2]);
    printf("La direccion del valor minimo es %p y el valor maximo es %p", (void *) menorValorPuntero(numeros, tamanio), (void*) mayorValorPuntero(numeros, tamanio));

}