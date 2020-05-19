#include <stdio.h>
int main(void){
    int p = 0;
    int array[5];
    int readValue = 0;
    int cellNumber = 0;
    int i = 0;
    for(i = 0 ; i < 5 ; i++){
        printf("%d. Enter a value: ", p = p +1);
        scanf("%d", &readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %d\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;
    }
    return 0;
}