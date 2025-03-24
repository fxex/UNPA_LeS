#include <stdio.h>
#include <string.h>

int palindromoIterativo(char *cadena){
    int longitud = strlen(cadena);
    int inicio = 0;
    int fin = longitud - 1;
    while (fin > inicio){
        if (cadena[inicio] != cadena[fin]){
            return 0;
        }
        inicio++;
        fin--;
    }
    return 1;
}

int palindromoRecursivo(char *cadena, int inicio, int fin){
    if (inicio > fin){
        return 1;
    }

    if (cadena[inicio] != cadena[fin]){
        return 0;
    }else{
        return palindromoRecursivo(cadena, inicio+1, fin-1);
    }
}


int main(){
    char palabra[] ="DABALEARROZALAZORRAELABAD";
    // int resultado = palindromoIterativo(palabra);
    int resultadoRecursivo = palindromoRecursivo(palabra, 0, strlen(palabra) - 1);
    printf("Hola Mundo %d", resultadoRecursivo);
    return 0;
}