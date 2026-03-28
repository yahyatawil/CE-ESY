#include <stdint.h>
#include <stdio.h>

int array[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
uint16_t array2[6] = {12, 13, 14, 15, 16, 17};

int* ptr_to_array = array; // pointer to the first element of array
uint16_t (*ptr_to_array_2)[6] = &array2; // pointer to the entire array2
int main() {
    for (int i = 0; i < 12; i++) {
        printf("%d ", *ptr_to_array++); // dereference the pointer and then increment it to point to the next element
    }
    printf("\n");

    for (int i = 0; i < 6; i++) {
        printf("%d ", (*ptr_to_array_2)[i]); // dereference the pointer to get the array and then access the i-th element
    }
    printf("\n");

    return 0;
}