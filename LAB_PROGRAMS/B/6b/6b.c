#include <stdio.h>

// Function prototypes
void input(int a[], int n);
int linearSearch(int a[], int n, int key);
void outputSearch(int position);

int main(void) {
    int n, key;

    // Read the array size and elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    input(a, n);

    // Read the element to search and display the result
    printf("Enter the element to search: ");
    scanf("%d", &key);

    outputSearch(linearSearch(a, n, key));
}

// Read array elements
void input(int a[], int n) {
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

// Return the index of the first matching element
int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (a[i] == key)
            return i;
    return -1;
}

// Display the search result
void outputSearch(int position) {
    if (position < 0)
        printf("\nLinear Search: Element not found.\n");
    else
        printf("\nLinear Search: Element found at index %d.\n", position);
}