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

int comparar(int vector1[], int n1, int vector2[], int n2) 
{
    int i, var, result = 0, auxI = 0;
    if(n1 > n2)
    {
        var = n2;
    }
    if(n1 < n2)
    {
        var = n1;
    }
    if(n1 == n2)
    {
        var = n1;
    }
    for(i = 0; i < var; i ++)
    {
        auxI = i;
        if(result == 0)
        {
            if(vector1[i]< vector2[i])
            {
                result = -1;
            }
            else
            {
                if(vector1[i] > vector2[i])
                {
                    result = 1;
                }
                else
                {
                    result = 0;
                }
            }
        }     
    }
    if( (n1 != n2) && result == 0 )
    {
        if( (n1 < n2 &&  n1 > auxI && auxI <= n2) || (  n2 > n1 &&  n2 > auxI && auxI <= n1) )
        {
            result = -1;
        }
        else
        {   
            result = 1;   
        }
    }
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