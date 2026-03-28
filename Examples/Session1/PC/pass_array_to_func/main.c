#include <stdint.h>
#include <stdio.h>

int array[6] = {1, 2, 3, 4, 5, 6};

int calculate_average_1(int *arr, size_t size) {
    int sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int calculate_average_2(int (*arr)[6]) {
    int sum = 0;
    for (size_t i = 0; i < 6; i++) {
        sum += (*arr)[i];
    }
    return sum / 6;
}

int calculate_average_3(int *arr) {
    int sum = 0;
    for (size_t i = 0; i < 6; i++) {
        sum += arr[i];
    }
    return sum / 6;
}

int main() {
    int avg1 = calculate_average_1(array, 6);
    int avg2 = calculate_average_2(&array);
    int avg3 = calculate_average_3(array);

    printf("Average calculated by method 1: %d\n", avg1);
    printf("Average calculated by method 2: %d\n", avg2);
    printf("Average calculated by method 3: %d\n", avg3);

    return 0;
}