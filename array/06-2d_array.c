#include <stdio.h>
int main() {
    // 2d array = an array, where each element of an array is an entire array
    //            useful if you need matrix, table of data, or grid
    //
    // example:
    // int data[how many rows][how many columns] = {row1 {1, 2, 3},
    //                                              row2 {4, 5, 6}}; 
    // int data[2][3] = {{1, 2, 3},     // row 1
    //                   {4, 5, 6}};    // row 2
    //                   c1 c2  c3

    int data[2][3];

    data[0][0] = 1;
    data[0][1] = 2;
    data[0][2] = 3;
    data[1][0] = 4;
    data[1][1] = 5;
    data[1][2] = 6;
    
    // calculates how many row and columns in bytes
    int rows = sizeof(data)/sizeof(data[0]);
    int columns = sizeof(data[0])/sizeof(data[0][0]);

    printf("\ntotal elements inside 2d array data[][] is 6");
    printf("\nsizeof(data) = %d", sizeof(data));
    printf("\nsizeof(data[0]) = %d", sizeof(data[0]));
    printf("\nsizeof(data[0][0]) = %d", sizeof(data[0][0]));
    printf("\n\ncalculate how many rows in byte: ");
    printf("\nsizeof(data)/sizeof(data[0]) = %d", sizeof(data)/sizeof(data[0]));
    printf("\n\ncalculate how many columns in byte: ");
    printf("\nsizeof(data[0])/sizeof(data[0][0]) = %d", sizeof(data[0])/sizeof(data[0][0]));


    printf("\n\nsize of 2d array data[rows][columns] in rows is %d bytes", rows);
    printf("\nsize of 2d array data[rows][columns] in columns is %d bytes", columns);
    printf("\ndata[rows: %d bytes][`columns: %d bytes]\n\n", rows, columns);

    // prints out all elements of data[2][3]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }

    return 0;
}
