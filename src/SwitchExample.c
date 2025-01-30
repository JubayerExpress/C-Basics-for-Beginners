#include <stdio.h>

int main() {
    int choice = 2;
    
    switch (choice) {
        case 1:
            printf("Choice is 1\n");
            break;
        case 2:
            printf("Choice is 2\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
