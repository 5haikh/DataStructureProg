#include <stdio.h>
#include <stdlib.h>

int main() {
    int r;
    r = fun(5);
    printf("%d \n", r);
    printf("%d\n", fun1(1));
    return 0;
}

int fun1(int n){
    x++;
    return n + x;
}

int fun(int n) {
    static int x = 0;
    if(n > 0) {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
