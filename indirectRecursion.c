int main() {
    funA(5);
    return 0;
}

funA(int n) {
    if (n > 0) {
        printf("%d ", n);
        funB(n - 1);
    }
}

funB(int n) {
    if (n > 0) {
        printf("%d ", n);
        funA(n / 2);
    }
}
