// #include <stdio.h>
// #include <math.h>
// #include <time.h>

// clock_t start, end; // data type
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     start = clock();
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum += i;
//     }
//     printf("%d\n", sum);
//     end = clock();
//     float used = (end - start) / CLOCKS_PER_SEC;
//     printf("%.1f\n%.1f", start, end);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", (n * (n + 1)) / 2);
// }

/////////////////////////time elapsed :::::::::::::::::
// #include <stdio.h>
// #include <time.h>

// int main()
// {
//     clock_t start_time, end_time;
//     double cpu_time_used;

//     // Record the start time
//     start_time = clock();

//     // Place your code to measure execution time here
//     // For example, let's simulate some computation
//     int sum = 0;
//     for (int i = 1; i <= 100000000; ++i)
//     {
//         sum += i;
//     }

//     // Record the end time
//     end_time = clock();

//     // Calculate the CPU time used in seconds
//     cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

//     printf("Sum: %d\n", sum);
//     printf("CPU Time Used: %f seconds\n", cpu_time_used);

//     return 0;
// }

// int main()
// {
//     clock_t start_time, end_time;
//     double cpu_time_used;

//     // Record the start time
//     start_time = clock();

//     // Place your code to measure execution time here
//     // For example, let's simulate some computation
//     long int n = 1000000000;
//     long int sum = n * (n + 1) / 2;

//     // Record the end time
//     end_time = clock();

//     // Calculate the CPU time used in seconds
//     cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

//     printf("Sum: %d\n", sum);
//     printf("CPU Time Used: %f seconds\n", cpu_time_used);

//     return 0;
// }


// #include<stdio.h>
// #include<sys/resource.h>
// #include<stdlib.h>
// int main()
// {
//     // Record the start memory usage
//     struct rusage usage_start;
//     getrusage(RUSAGE_SELF, &usage_start);

//     // Place your code to measure memory usage here
//     // For example, let's allocate some memory
//     int *array = (int *)malloc(1000000 * sizeof(int));

//     // Record the end memory usage
//     struct rusage usage_end;
//     getrusage(RUSAGE_SELF, &usage_end);

//     // Calculate memory usage in kilobytes
//     long memory_used = usage_end.ru_maxrss - usage_start.ru_maxrss;
// }