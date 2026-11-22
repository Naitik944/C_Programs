#include <stdio.h>

// Function prototypes
void input(int a[], int n);
int process_sum(int a[], int n); // Changed from finding an index to calculating sum
void output_sum(int totalSum);

int main(void) {
    int n;

    // Read the number of elements
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 1;

    int a[n];
    input(a, n);

    // Calculate the sum and display the result
    int total = process_sum(a, n);
    output_sum(total);

    return 0;
}

// Read array elements
void input(int a[], int n) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) break; // Ensure we read a number
    }
}

// Function to calculate the sum of all elements in the array
int process_sum(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i]; // Add each element to the total
    }
    return sum;
}

// Display the final sum
void output_sum(int totalSum) {
    printf("\nTotal Sum of numbers is: %d\n", totalSum);
}
