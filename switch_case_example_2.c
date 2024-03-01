#include <stdio.h>

int main() {
    int option;

    printf("Welcome to the vending machine!\n");
    printf("Please select an option:\n");
    printf("1. Coke\n");
    printf("2. Pepsi\n");
    printf("3. Sprite\n");
    printf("4. Mountain Dew\n");
    printf("5. Fanta\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("You have selected Coke. Please insert $5.\n");
            break;
        case 2:
            printf("You have selected Pepsi. Please insert $4.\n");
            break;
        case 3:
            printf("You have selected Sprite. Please insert $1.\n");
            break;
        case 4:
            printf("You have selected Mountain Dew. Please insert $3.\n");
            break;
        case 5:
            printf("You have selected Fanta. Please insert $2.\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
            break;
    }

    return 0;
}
//output: Welcome to the vending machine!
//Please select an option:
//1. Coke
//2. Pepsi
//3. Sprite
//4. Mountain Dew
//5. Fanta
//Enter your choice (1-5): 3
//You have selected Sprite. Please insert $1.
