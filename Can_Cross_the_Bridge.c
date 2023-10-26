#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int t = z - y;
    int u = t / x;
    printf("%d", u);
    return 0;
}
