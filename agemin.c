#include <stdio.h>
int main(void) {
    //! showArray(ages, cursors=[i])
    int ages[10];
    int i;
    int ageMin;
    for (i=0; i<10; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] < ageMin) {
            ageMin = ages[i];                                   /*int ages[10] = {75, 9, 34, 66, 23, 78, 53, 23, 11, 74}*/
        }
    }
    printf("The minimum age is %d.\n", ageMin);
    printf("Age differences with the eldest person:\n");
    for(i=0;i<10;i++){
        printf("%d:%d ", ages[i],ages[i]/ageMin);
    } printf("\n");
    return 0;
}