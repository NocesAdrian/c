#include <stdio.h>
#include <string.h>

void printArray(int array[], int totalElements) {
	printf("{ ");
	for(int i = 0; i < totalElements; i++) {
	    printf("%d ", array[i]);
	}
	printf("}\n");
}

void sort(int array[], int totalElements) {
    for(int i = 0; i < totalElements - 1; i++) {
        for(int j = 0; j < totalElements - i - 1; j++) {
            if(array[j] > array[j+1]) {
                int tmp;
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}

int main(int argc, char *argv[])
{
	int ages[] = {10,18,5,8,9,16,14,19,4};
	int totalElements = sizeof(ages)/sizeof(ages[0]);
	
	// BEFORE
	printf("Before: \n");
    printArray(ages, totalElements);
    
    sort(ages, totalElements);
    
    // AFTER
    printf("\n After: \n");
    printArray(ages, totalElements);
	
	return 0;
}