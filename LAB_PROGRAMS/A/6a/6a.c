#include <math.h>
#include <stdio.h>

int input(int a[], int n);
int findSum(int a[], int n);
int findLargest(int a[], int n);
int findSmallest(int a[], int n);
float findMean(int sum, int n);
float findStdDeviation(int a[], int n, float mean);
void output(int sum, int largest, int smallest, float mean, float stdDeviation);

int main(void) {
    int a[100], n,sum, largest, smallest;
    float mean, stdDeviation;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    if (!input(a, n)) {
        printf("Invalid element input.\n");
        return 1;
    }

    sum = findSum(a, n);
    largest = findLargest(a, n);
    smallest = findSmallest(a, n);
    mean = findMean(sum, n);
    stdDeviation = findStdDeviation(a, n, mean);
    output(sum, largest, smallest, mean, stdDeviation);
    return 0;
}

int input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        if (scanf("%d", &a[i]) != 1)
        {
            return 0;
        }
    }
    return 1;
}

int findSum(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int findLargest(int a[], int n) {
    int largest = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }
    return largest;
}

int findSmallest(int a[], int n) {
    int smallest = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }
    return smallest;
}

float findMean(int sum, int n) {
    return (float)sum / n;
}

float findStdDeviation(int a[], int n, float mean) {
    float sum = 0.0f;
    for (int i = 0; i < n; i++) {
        float difference = a[i] - mean;
        sum += difference * difference;
    }
    return sqrtf(sum / n);
}

void output(int sum, int largest, int smallest, float mean, float stdDeviation) {
    printf("\n");
    printf("Sum = %d\n", sum);
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    printf("Mean = %.2f\n", mean);
    printf("Standard Deviation = %.2f\n", stdDeviation);
}
