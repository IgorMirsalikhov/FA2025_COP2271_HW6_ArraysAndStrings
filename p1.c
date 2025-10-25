#include <stdlib.h>

#define SIZE 20

void plantFlowers(int *flowerbed, int flowerbedSize);

void plantFlowers(int *flowerbed, int flowerbedSize) {
    for (int i = 0; i < flowerbedSize; i += rand() % 4 + 2) {
        flowerbed[i] = 1;
    }
}


