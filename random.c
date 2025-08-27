#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randomChar() {
    char c;

    c = 'A' + (rand() % 26);
    return c;
}