#include "ordination_algorithms.h"
#include "random_vector.h"
#include "rdtsc.h"
#include "vector_is_ordened.h"

long long quicksort_time(int range) {
  int *vector, *aux; 
  long t1;
  aux = malloc(range * sizeof(int));
  vector = malloc(range * sizeof(int));
  random_vector(vector, range);
  t1 = rdtsc();
  quicksort(vector, 0, range-1);
  t1 = rdtsc() - t1;
  //verification if vector is ordened
  vector_is_ordened(vector, range);
  free(vector);
  free(aux);
  return t1;
}

long long mergesort_time(int range) {
  int *vector, *aux; 
  long t1;
  aux = malloc(range * sizeof(int));
  vector = malloc(range * sizeof(int));
  random_vector(vector, range);
  t1 = rdtsc();
  mergesort(vector, aux, 0, range-1);
  t1 = rdtsc() - t1;
  //verification if vector is ordened
  vector_is_ordened(vector, range);
  free(vector);
  free(aux);
  return t1;
}

long long insertionsort_time(int range) {
  int *vector;
  long t1;
  vector = malloc(range * sizeof(int));
  random_vector(vector, range);
  t1 = rdtsc();
  insertionsort(vector, range);
  t1 = rdtsc() - t1;
  //verification if vector is ordened
  vector_is_ordened(vector, range);
  free(vector);
  return t1;
}

long long bublesort_time(int range) {
  int *vector;
  long t1;
  vector = malloc(range * sizeof(int));
  random_vector(vector, range);
  t1 = rdtsc();
  bublesort(vector, range);
  t1 = rdtsc() - t1;
  //verification if vector is ordened
  vector_is_ordened(vector, range);
  free(vector);
  return t1;
}