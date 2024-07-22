#include <stdio.h>

int main() {
    int count = 0;

    while (count < 100000) {
        count += 100;

        printf("%d\n", count);
    }

    return 0;
}

/* or

int count = 0;

for (i = 0; i < 100000; i+=100){

printf("%d", count);

return 0;


}


*/