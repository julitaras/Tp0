#include "tp0.h"
#include <stdio.h>

/* *****************************************************************
 *                     FUNCIONES A COMPLETAR                       *
 *         (ver en tp0.h la documentación de cada función)         *
 * *****************************************************************/

void swap (int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}


int maximo(int vector[], int n) {
    int i = 0;
    int max =  vector[0];
    int pos;
    if(n == 0){
        return -1;
    }
    for(i; i < n; i ++){    
        if(vector[i] > max){
            max = vector[i];
            pos = i;
        }
    }
    return  pos;
}

int comparar(int vector1[], int n1, int vector2[], int n2) {
        if(vector1[0] == vector2[0]){
            return 0;
        }
        else{
            if(vector1[0] < vector2[0]){
                return -1;
            }else{
                return 1;
            }
        }
}


void seleccion(int vector[], int n) {
    int i;
    for(i = 0; i < n - 1; i ++){
        if(vector[i] > vector[i + 1]){
            swap(&vector[i], &vector[i + 1]);
        }
    }

}

// void main(){
//     int a = 5;
//     int b = 6;
//     swap(&a, &b);
//     printf("El resultado es: %i, %i\n", a, b);


//     int unico[] = { 8 };
// 	int vector1[] = { 1, 2, 3, 4, 5 };
// 	int vector2[] = { -2000, -1500, -1000, -3000 };
// 	int vector3[] = { 8, -10, 27, 3, -50 };
// 	int vector4[] = { 8, -10, 27 };
// 	int vector5[] = { 100, -10, 27 };
// 	/* Declaro los largos de los vectores */
// 	int nunico = 1;
// 	int nvector1 = 5;
// 	int nvector2 = 4;
// 	int nvector3 = 5;
// 	int nvector4 = 3;
// 	int nvector5 = 3;

//     #define VACIO NULL
//     #define NVACIO 0
// 	int nVacio = maximo(vector5, NVACIO);
// 	int numero0 = maximo(unico, nunico);
// 	int numero1 = maximo(vector1, nvector1);
// 	int numero2 = maximo(vector2, nvector2);
// 	int numero3 = maximo(vector3, nvector3);
// 	int numero4 = maximo(vector4, nvector4);
// 	int numero5 = maximo(vector5, nvector5);
	

// 	printf("El maximo valor del array nulo es el : %i\n", nVacio);
// 	printf("El maximo valor del array 0 es el : %i\n", numero0);
// 	printf("El maximo valor del array 1 es el : %i\n", numero1);
// 	printf("El maximo valor del array 2 es el : %i\n", numero2);
// 	printf("El maximo valor del array 3 es el : %i\n", numero3);
// 	printf("El maximo valor del array 4 es el : %i\n", numero4);
// 	printf("El maximo valor del array 5 es el : %i\n", numero5);

// //     printf("\n\n\n\n\n");

// //     int comparo = comparar(vector1, 5, vector2, 5);
// //     printf("(-1) Si el primer arrgelo es menor, (0) SI son iguales, (1)SI el primero es mayor: %i\n", comparo);
// //     printf("\n\n\n\n\n");

// //     int comparo2 = comparar(vector2, 5, vector1, 5);
// //     printf("(-1) Si el primer arrgelo es menor, (0) SI son iguales, (1)SI el primero es mayor: %i\n", comparo2);
// //     printf("\n\n\n\n\n");

// //     int i;
// //     for(i = 0; i < 5; i ++){
// //         printf("Numeros del vector uno: \t%i\n", vector1[i]);
// //     }
// //     printf("\n\n\n\n\n");
// //     int j;
// //     for(j = 0; j < 5; j ++){
// //         printf("Numeros del vector dos: %i\n", vector2[j]);
// //     }
// // printf("\nDespues de seleccion:\n");
// // seleccion(vector1, 5);
// //     for(i = 0; i < 5; i ++){
// //         printf("Numeros del vector uno: \t%i\n", vector1[i]);
// //     }
// //     printf("\n\n\n\n\n");
// //     seleccion(vector2, 5);
// //     for(j = 0; j < 5; j ++){
// //         printf("Numeros del vector dos: %i\n", vector2[j]);
// //     }
// }

