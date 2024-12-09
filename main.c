#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {

    int mice[] = {4, -4, 2};
    int holes[] = {4, 0, 5};
    int n = sizeof(mice) / sizeof(mice[0]);


    qsort(mice, n, sizeof(int), compare);
    qsort(holes, n, sizeof(int), compare);

    int maxTime = 0;
    for (int i = 0; i < n; i++) {
        int time = abs(mice[i] - holes[i]);
        if (time > maxTime) {
            maxTime = time;
        }
    }


    printf("Minimum time when the last mouse gets into a hole: %d\n", maxTime);

    return 0;
}
