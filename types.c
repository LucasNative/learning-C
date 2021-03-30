#include <stdio.h>

int main(void) {

    printf("Um char tem: %lu bytes ou %ld bits\n", sizeof (char), sizeof (char)* 8);
    printf("Um int tem: %ld bytes ou %lu bits\n", sizeof (int), sizeof (int) * 8);
    printf("Um float tem: %ld bytes ou %lu bits\n", sizeof (float), sizeof (float) * 8);
    printf("Um double tem: %ld bytes ou %lu bits\n", sizeof (double), sizeof (double) * 8);
}
