#include <stdio.h>

int main() {
    long long x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);

    if (x == y && y == z) {
        printf("%lld\n%lld\n%lld\n", x, y, z);
    } else if (x > y && x > z) {
        if (y > z) {
            printf("%lld\n%lld\n%lld\n", z, y, x);
        } else {
            printf("%lld\n%lld\n%lld\n", y, z, x);
        }
    } else if (y > x && y > z) {
        if (x > z) {
            printf("%lld\n%lld\n%lld\n", z, x, y);
        } else {
            printf("%lld\n%lld\n%lld\n", x, z, y);
        }
    } else if (z > x && z > y) {
        if (x > y) {
            printf("%lld\n%lld\n%lld\n", y, x, z);
        } else {
            printf("%lld\n%lld\n%lld\n", x, y, z);
        }
    } else if (x == y) {
        if (z > x) {
            printf("%lld\n%lld\n%lld\n", x, y, z);
        } else {
            printf("%lld\n%lld\n%lld\n", z, x, y);
        }
    } else if (x == z) {
        if (y > x) {
            printf("%lld\n%lld\n%lld\n", x, z, y);
        } else {
            printf("%lld\n%lld\n%lld\n", y, x, z);
        }
    } else if (y == z) {
        if (x > y) {
            printf("%lld\n%lld\n%lld\n", y, z, x);
        } else {
            printf("%lld\n%lld\n%lld\n", x, y, z);
        }
    }

    printf("\n");
    printf("%lld\n%lld\n%lld\n", x, y, z);

    return 0;
}





// ANOTHER ANSWER
#include <stdio.h>

int main() {
    long long x, y, z, temp;

    scanf("%lld %lld %lld", &x, &y, &z);

    // Sort the numbers in ascending order
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    // Print sorted numbers
    printf("%lld\n%lld\n%lld\n\n", x, y, z);

    // Print original numbers
    printf("%lld\n%lld\n%lld\n", x, y, z);

    return 0;
}