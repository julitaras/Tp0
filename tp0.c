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
    int pos = 0;

    if(n == 0) {
        pos = -1;
    } else {
        if(n == 1) {
            pos = 0;
        } else {
            for(i = 1; i < n; i++){    
                if(vector[i] > vector[pos]){
                    pos = i;
                }
            }
        }
    }
    return pos;
}

int comparar(int vector1[], int n1, int vector2[], int n2) {
    int result;
    if(vector1 == NULL && vector2 == NULL) {
        result = 0;
    }else{
        if(vector1 != NULL && vector2 != NULL) {
            int i = 0;

            int var;    
            if (n1<n2) { var=n1;}
            if (n1>n2) {var=n2;}
            if (n1==n2) {var=n1;}
            printf("%i",var);
            for(i = 0 ; i < var; i++)
            {
                if(vector1[i] == vector2[i]) {
                    result = 0;
                } else {
                    if(vector1[i] < vector2[i]) {
                        result = -1;
                    } else {
                        result = 1;
                    }
                }
            }
            if(n2 > i) // vec3[1]=8     i=1    unico=overflow
            {
                result=-1;
            }
            else
            {
                result=1;
            }
            
            

           

            
            /* while (i < n1 && i < n2 ) {
                if(vector1[i] == vector2[i]) {
                    result = 0;
                } else {
                    if(vector1[i] < vector2[i]) {
                        result = -1;
                    } else {
                        result = 1;
                    }
                }
                i++;
            } */

           /* if(n1 <= i) {
                if(n2 > i) {
                    result = -1;
                } else {
                    result = 0;
                }
            }

             */
        }
        else{
            result = -1;
        }
    }
    printf("\t\t%i\n", result);
    return result;
}

void seleccion(int vector[], int n) {
    int i;
    for(i = 0; i < n; i++){
        int cotaMayor = n - i;
        int maxRestante = maximo(vector, cotaMayor);
        swap(&vector[maxRestante], &vector[cotaMayor - 1]);
    }
}