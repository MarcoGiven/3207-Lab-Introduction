#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomChar() {
    char c;

    c = 'A' + (rand() % 26);
    return c;
}