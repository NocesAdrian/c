#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    char *ptr = (char *)malloc(3 * sizeof(char));
    if (ptr == NULL) exit(1);

    for (size_t i = 0; i < 3; i++) {
        ptr[i] = 'a' + i;
        printf("%c\n", ptr[i]);
    }

    free(ptr);


    return 0;
}