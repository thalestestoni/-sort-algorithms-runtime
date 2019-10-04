void quicksort(int* vector, int start, int end)
{
    if(start < end){
        int index = (rand() % (end + 1 - start)) + start;
        int temp = vector[start];
        vector[start] = vector[index];
        vector[index] = temp;
       
        int pivo = vector[start];
        int i = start+1;
        int j = end;

        while(i <= j){
            while(vector[i] < pivo) i++;
            while(vector[j] > pivo) j--;
            if(i <= j){
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
                i++;
                j--;
            }
        }
        if(pivo > vector[j]){
            vector[start] = vector[j];
            vector[j] = pivo;
        }

        quicksort(vector, start, j-1);
        quicksort(vector, j+1, end);
    }
}


void mergesort(int vector[], int aux[], int start, int end) { 
    if(start< end){ 
        //divisao 
        int middle = (start+end)/2; 
        mergesort(vector, aux, start, middle); 
        mergesort(vector, aux, middle+1, end); 
        
        //conquista 
        int left = start; 
        int right = middle+1; 
        int pos = start; 

        while(left <= middle && right <= end) { 
            if(vector[left] < vector[right]) { 
                aux[pos++] = vector[left++]; 
            } 
            else{ 
                aux[pos++] = vector[right++];  
            } 
        } 

        while(left <= middle) { 
            aux[pos++] = vector[left++]; 
        } 

        while(right <= end) { 
            aux[pos++] = vector[right++]; 
        } 

        while(start <= end) { 
            vector[start] = aux[start]; 
            start++; 
        } 
    } 
}


void insertionsort(int *vector, int range) {
    int i, j, elected;

    for(i = 1; i < range; i++) {
        elected = vector[i];
        j = i-1;
        while(j >= 0 && elected < vector[j]) {
            vector[j+1] = vector[j];
            j = j-1;
        }
        vector[j+1] = elected;
    }
}


void bublesort(int *vector, int range) {
    int i, j, temp;

    for(i = 0; i < range -1; i++) {
        for(j = 0;  j < range - i - 1; j++) {
            if(vector[j] > vector[j+1]) {
                temp = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
}