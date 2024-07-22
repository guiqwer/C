#include <stdio.h>

#define VECTOR_SIZE 10

int main() {
    int VEC[VECTOR_SIZE];

    printf("Enter %d integers:\n", VECTOR_SIZE);
    
    for (int i = 0; i < VECTOR_SIZE; i++) {
        scanf("%d", &VEC[i]);
    }
    
    printf("Numbers and their parity:\n");
    for (int i = 0; i < VECTOR_SIZE; i++) {
        if (VEC[i] % 2 == 0) {
            printf("%d is even\n", VEC[i]);
        } else {
            printf("%d is odd\n", VEC[i]);
        }        
    }

    return 0;
}
