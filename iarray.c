#include <stdio.h>
int main(void) {
    //! showArray(ages, cursors=[i])
    int ages[10];
    int i;
    int ageMax=0;
    for (i=0; i<10; i++) {                              /*int ages[10] = {75, 9, 34, 66, 23, 78, 53, 23, 11, 74}*/
        scanf("%d",&ages[i]);
        if(ages[i] > ageMax){
            ageMax = ages[i];
        }
    }
    printf("%d", ageMax);
    return 0;
}
