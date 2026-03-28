#include <stdint.h>
#include <stdio.h>

uint16_t unary_array[3][3]={
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}
};

uint16_t (*ptr_to_row)[3] = unary_array; // pointer to an array of 3 uint16_t elements, initialized to point to the first row of unary_array

int main() {
    for(int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
        printf("%d ", (*ptr_to_row)[i]); // dereference the pointer to get the current row and access the i-th element
    }ptr_to_row++;
    printf("\n");
}
    return 0;
}