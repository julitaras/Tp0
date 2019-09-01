#include "tp0.h"
#include <stdio.h>

/* *****************************************************************
 *                     FUNCIONES A COMPLETAR                       *
 *         (ver en tp0.h la documentación de cada función)         *
 * *****************************************************************/

void swap (int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = *x;
}


int maximo(int vector[], int n) {
	if(n == 1)
    {
        return n;
    } 
    if(n > 0){
	
    	int restantes = maximo(vector, (n - 1));
    
    	if(restantes > vector[ n - 1]){
    		return restantes;
		}
		else{
			return vector[n - 1];
		} 
	}
	return -1;	
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
    for(int i = 0; i < n; i ++){
        if(vector[i] > vector[i + 1]){
            swap(vector[i], vector[i + 1]);
        }
    }

}

void main(){
	int vector1[] = {1,2, 7, 2, 9};

	int vector2[] = {2, 5, 7, 2, 12};

	int numero1 = maximo(vector1, 5);
	int numero2 = maximo(vector2, 5);

	printf("El maximo valor del array 1 es el : %i\n", numero1);
	printf("El maximo valor del array 2 es el : %i\n", numero2);

    printf("\n\n\n\n\n");

    int comparo = comparar(vector1, 5, vector2, 5);
    printf("(-1) Si el primer arrgelo es menor, (0) SI son iguales, (1)SI el primero es mayor: %i\n", comparo);
    printf("\n\n\n\n\n");

    int comparo2 = comparar(vector2, 5, vector1, 5);
    printf("(-1) Si el primer arrgelo es menor, (0) SI son iguales, (1)SI el primero es mayor: %i\n", comparo2);
}

