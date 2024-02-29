//Consider the series 3+7+12+18+ 25+..........
//Store the sum of the series in an array where named array1
//0th element of the array is going to store the sum of series upto 0th element
//1st element of the array is going to store the sum of series upto 1 st element
//ith element of the array is going to store the sum of the series upto ith element

#include <stdio.h>

int main() {
    int n; // Number of elements in the series
    printf("Enter the number of elements in the series: ");
    scanf("%d", &n);
    
    int series[n]; // Array to store the series
    int array1[n]; // Array to store the sum of the series up to each element
    
    // Generating the series and calculating the sum up to each element
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i + 3; // Each term starts from 3 and increments by the position
        series[i] = sum;
        array1[i] = sum;
        if (i > 0) {
            array1[i] += array1[i - 1]; // Adding the sum of the previous element
        }
    }
    
    // Printing the series and the sum up to each element
    printf("Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", series[i]);
    }
    printf("\n");
    
    printf("Sum of series up to each element:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, array1[i]);
    }
    
    return 0;
}

//output:
//Enter the number of elements in the series: 5
//Series: 3 7 12 18 25
//Sum of series up to each element:
//Element 0:3
//Element 1: 10
//Element 2: 22
//Element 3: 40
//Element 4: 65
