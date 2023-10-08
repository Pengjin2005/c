#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, k = 0;
    scanf("%d %d", &n, &x);

    int X = x;
    int p = 0;
    while (X > 0) {
        p++;
        X /= 10;
    }

    // Allocate memory for num and include space for the null-terminator
    char *num = (char *)malloc((p + 1) * sizeof(char));

    for (int i = 1; i <= n; i++) {
        // Initialize num with null characters
        for (int j = 0; j < p; j++) {
            num[j] = '0';
        }
        num[p] = '\0'; // Null-terminate the string

        int temp = i;
        for (int j = p - 1; j >= 0; j--) {
            num[j] = (temp % 10) + '0';
            temp /= 10;
        }

        for (int j = 0; j < p; j++) {
            if (num[j] == x + '0') {
                k++;
            }
        }
    }

    printf("%d", k);
    free(num);
    return 0;
}