#include <stdio.h>

// Function to greet the user
void greet() {
    printf("Hello, Welcome to C Programming!\n");
}

int main() {
    // Variable declaration
    int age = 25;
    float height = 5.9;
    char grade = 'A';

    // Print basic variables
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    // If-Else Example
    if (age > 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    // For Loop Example
    for (int i = 1; i <= 3; i++) {
        printf("This is iteration number %d\n", i);
    }

    // Calling function
    greet();

    // User input example
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your entered age is: %d\n", age);

    return 0;
}
 
