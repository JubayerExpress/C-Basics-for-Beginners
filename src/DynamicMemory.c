#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;
    
    ptr = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
        printf("Element %d: %d\n", i, ptr[i]);
    }
    
    free(ptr);
    return 0;
}
