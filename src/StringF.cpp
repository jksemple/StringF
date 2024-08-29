#include "StringF.h"
const String StringF(const char* format, ...) {
    char buffer[100];

    if (! format) {
        sprintf(buffer, "Missing format string");
    } else {
        va_list args;
        va_start(args, format);
        vsnprintf(buffer, sizeof(buffer), format, args);
    } 
    return String(buffer);
}

