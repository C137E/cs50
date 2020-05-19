#include <stdio.h>
int main(void)
{
    int recipe = 0;
    int array[10];
    int cellNumber = 0;
    int idNumber = 0;
    int i = 0;

for(i = 0; i < 10; i++){
        scanf("%d",&recipe);
        array[cellNumber] = recipe;
        cellNumber = cellNumber + 1;
        array[idNumber] = cellNumber;
}
        scanf("%d",&idNumber);
        idNumber = array[idNumber];
        printf("%d",idNumber);


return 0;



}