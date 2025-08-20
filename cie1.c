#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double time_taken;

    start = clock(); // Start time

    // Simple task: squaring numbers
    for (int i = 0; i < 1000000; i++) {
        int x = i * i;
    }

    end = clock(); // End time

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_taken);

    return 0;
}
