#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
    char c;

    c = 'A' + (rand() % 26);
    return c;
}