#include <stdio.h>

    int input(void);
    int process(int n);
    int sum(int nx);
    void output(int result);

int main(void) {
    int n=input();
    int nx=process(n);
    int result=sum(nx);
    output(result);
    return 0;
}
int input() {
    return 1000;
}
int process(int n) {
    return n;
}
int sum(int nx) {
 int result=0;

    for (int i=1; i<nx; i++) {
        if (i%3==0 || i%5==0) {
            result += i;
        }
    }
    return result;
}
void output(int result) {
    printf("%d\n",result);
}

