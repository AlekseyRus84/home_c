#include <stdio.h>

int is_prime(int n, int delitel) {
    if (n < 2) return 0;
    if (delitel * delitel > n) return 1;
    if (n % delitel == 0) return 0;
    return is_prime(n, delitel + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", is_prime(n, 2) ? "YES" : "NO");
    return 0;
}
