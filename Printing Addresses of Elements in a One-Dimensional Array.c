//Declare a one dimentional array and print the value of address of the each individual variable of the array.
#include <stdio.h>

int main() {
    int array[5]; // Declare a one-dimensional array of integers
    int i;

    // Initialize the array with some values
    for (i = 0; i < 5; i++) {
        array[i] = i * 10; // Assign values to each element of the array
    }

    // Print the address of each individual variable of the array
    printf("Addresses of individual elements of the array:\n");
    for (i = 0; i < 5; i++) {
        printf("Address of array[%d]: %p\n", i, (void *)&array[i]); // Print the address of each element
    }

    return 0;
}
//output
//Addresses of individual elements of the array:
//Address of array[0]: 0x7ffc56d46230
//Address of array[1]: 0x7ffc56d46234
//Address of array[2]: 0x7ffc56d46238
//Address of array[3]: 0x7ffc56d4623c
//Address of array[4]: 0x7ffc56d46240
