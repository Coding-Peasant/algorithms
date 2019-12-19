#ifndef SORT_H
#define SORT_H

#ifdef __cplusplus
extern "C" {
#endif

void insertionSort(int array[], int length);
void binaryInsertionSort(int array[], int length);
void shellSort(int array[], int length);

void bubbleSort(int array[], int length);
void bubbleSort2(int array[], int length);
void cocktail(int array[], int length);
void quickSort(int array[], int left, int right);
void quickSort2(int array[], int left, int right);
void quickSort3(int array[], int left, int right);

#ifdef __cplusplus
}
#endif

#endif