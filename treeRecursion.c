int main() {
    fun(3);
    return 0;
}

int fun(int n) {
    if(n > 0 ) {
        printf("%d ", n);
        fun(n - 1);
        fun(n - 1);
    }
}
