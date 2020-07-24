#include <stdio.h>

int main(void) {

    
    int index[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    double year0[12] = {-3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2};
    double year1[12] = {-1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9};
    double year2[12] = {-4.0, 1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6};
    double* years[12] = {year0, year1, year2};
    
    double sum_years[3] = {0,};
    double sum_months[12] = {0,};
    
    printf("[Temperature Data]\n");
    printf("Year index:\t");

    for (int i = 0; i < 12; i++) {
        printf("%3d\t", index[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("Year %d\t:\t", i);
        for (int j = 0; j < 12; j++) {
            printf("%4.1lf\t", years[i][j]);
            sum_years[i] += years[i][j];
            sum_months[j] += years[i][j];
        }
        printf("\n");
    }

    printf("\n");
    printf("[Yearly average temperatures of 3 years]\n");
    for (int i = 0; i < 3; i++) {
        printf("Year %d\t:\t", i);
        printf("average temperature = %.1lf\n", sum_years[i] / 12);
    }

    printf("\n");
    printf("[Monthly average temperatures for 3 years]\n");
    printf("Year index:\t");
    for (int i = 0; i < 12; i++) {
        printf("%3d\t", index[i]);
    }

    printf("\n");
    
    printf("Avg temps:\t");
    for (int i = 0; i < 12; i++) {
        printf("%.1lf\t", sum_months[i] / 3);
    }

    printf("\n");
    return 0;
}