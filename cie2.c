#include <stdio.h>
#include <omp.h>

int main() {
    double start, end, time_taken;

    start = omp_get_wtime(); // Start wall time

    #pragma omp parallel for
    for (int i = 0; i < 1000000; i++) {
        int x = i * i;  // Simple task: squaring numbers
        // Note: x is private to each thread by default in this loop
    }

    end = omp_get_wtime(); // End wall time

    time_taken = end - start;
    printf("Execution time with OpenMP: %f seconds\n", time_taken);

    return 0;
}
