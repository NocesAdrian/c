#include <stdio.h>

int main() {

    int rows;
    int columns;
    char sysmbol;

    printf("enter number of rows: ");
    scanf("%d", &rows);
    getchar();

    printf("enter number of columns: ");
    scanf("%d", &columns);
    getchar();

    printf("enter number of sysmbol: ");
    scanf("%c", &sysmbol);
    getchar();

    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= columns; j++) {
            printf("%c", sysmbol);
        }
        printf("\n");
    }




    return 0;
}