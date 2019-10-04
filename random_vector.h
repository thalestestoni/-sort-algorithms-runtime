void random_vector(int* vector, int range){
    for(int i = 0; i < range; i++){
        vector[i] = rand() % 100;
    }
}