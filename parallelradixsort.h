#ifndef parallelradixsort 
#define parallelradixsort

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include "datas.h"

void parallelRadixSort();
void pradixSort(int[], int);
void pcountSort(int[], int, int);
int pgetMax(int[], int);

#endif
