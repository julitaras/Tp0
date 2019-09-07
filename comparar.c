int comparar(int vector1[], int n1, int vector2[], int n2) {
    int i, result;
    if(n1 > n2){
        for(i = 0; i < n1; i++ ){
            if(vector1[i] < vector2[i] || vector1[i] != vector2[i]) 
            {
                result =  -1;
            }else
            {
                result = 1;
            }
        }
    }
    return result; 
}