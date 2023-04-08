#include <stdio.h>

char* _memcpy(char* dest, char* src, unsigned int n) {
    char* start = dest;
    while (n--) {
        *dest++ = *src++;
    }
    return start;
}
