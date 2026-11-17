6a) Write a modular C program by passing one-dimensional arrays to functions to perform aggregate and search operations (sum of n numbers, find largest/smallest, compute mean and standard deviation).

Function Prototypes
void input(int a[], int n);
int findSum(int a[], int n);
int findLargest(int a[], int n);
int findSmallest(int a[], int n);
float findMean(int sum, int n);
float findStdDeviation(int a[], int n, float mean);
void output(int sum, int largest, int smallest, float mean, float stdDeviation);

Sample Input
5
10
20
30
40
50
Sample Output
Enter number of elements: 5
Enter element at index 0: 10
Enter element at index 1: 20
Enter element at index 2: 30
Enter element at index 3: 40
Enter element at index 4: 50


Sum = 150
Largest = 50
Smallest = 10
Mean = 30.00
Standard Deviation = 14.14