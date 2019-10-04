void vector_is_ordened(int* vector, int range){
    for(int i = 0; i < range - 1; i++){
        if(vector[i] > vector[i+1]){
            printf("Nao ordenado corretamente\n");
            break;
        }
    }
}