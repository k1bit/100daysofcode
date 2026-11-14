// Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum Signal { RED, YELLOW, GREEN };

int main() {
    const char *names[] = { "RED", "YELLOW", "GREEN" };

    for (enum Signal s = RED; s <= GREEN; s++) {
        printf("%s=%d\n", names[s], s);
    }

    return 0;
}
