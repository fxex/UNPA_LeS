#include <stdio.h>
#include <stdlib.h>

void numerosParesImpares(){
    int numeros[10];
    for (int i = 0; i < 10; i++){
        printf("Ingrese un numero entero: ");
        scanf("%d",numeros+i);
    }

    for (int i = 0; i < 10; i++){
        if (numeros[i]%2 == 0){
            printf("El número %d es par\n", numeros[i]);
        }else{
            printf("El número %d es impar\n", numeros[i]);
        }
    }
}

int esNumeroPerfecto(int numero){
    int sum = 0;
    for (int i = 1; i < numero; i++){
        if (numero % i == 0){
            sum += i;
        }
    }
    return sum == numero;
}

void primero100NumerosPerfectos(){
    int contador = 0;
    int num = 2;
    while (contador<100){
        int condicion = esNumeroPerfecto(num);
        if (condicion){
            contador++;
            printf("%d es un numero perfecto\n", num);
        }
        num++;
    }
    
}

void inversoNumero(){
    int numero = 0;
    int divisor = 10;
    printf("Ingrese un numero de 4 digitos: ");
    scanf("%d", &numero);
    while (numero < 1000 || numero >= 10000){
        printf("Error, porfavor ingrese un numero de 4 digitos: ");
        scanf("%d", &numero);   
    }
    printf("El inverso del numero es: ");
    int modulo;
    while (numero > 0){
        modulo = numero % divisor;
        printf("%d", modulo);
        numero -= modulo;
        numero /= divisor; 
    }
    printf("\n");
}

int main(){
    int opcion=-1;
    while (opcion != 0){
        printf("Bienvenido al menu de opciones\n");
        printf("1. Números pares e impares\n");
        printf("2. 100 números perfectos\n");
        printf("3. Inverso\n");
        printf("0. Salir\n");
        printf("Que opcion quiere elegir: ");
        scanf("%d", &opcion);
        switch (opcion){
        case 1:
            numerosParesImpares();
            break;
        case 2:
            primero100NumerosPerfectos();
            break;
        case 3:
            inversoNumero();
            break;
        case 0:
            break;
        default:
            break;
        }
    }
    
    return 0;
}