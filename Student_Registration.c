#include<stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);

        // Check if it is possible for all friends to register
        if (N <= (M - K)) {
            printf("YES
");
        } else {
            printf("NO
");
        }
    }

    return 0;
}
