#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("minutes: ");
    int minutes = GetInt();
    int bottles = ((int)(minutes * 1.5 * 128 / 16));
    printf("bottles: %i\n", bottles);
}