6b) Write a modular C program by passing a one-dimensional array to functions to implement the following operations:

      Linear Search – Search for a given element in the original array.

The program should:

Read the number of elements n.
Read the elements of the array.
Read the element to be searched.
Perform linear search on the original array.
Display the results
Function Prototypes
void input(int a[], int n);
int linearSearch(int a[], int n, int key);
void outputSearch(int position);

Sample Input
6
40 10 30 20 50 60
30
Sample Output
Enter the number of elements: 6
Enter the elements:
40 10 30 20 50 60
Enter the element to search: 30

Linear Search: Element found at index 2.