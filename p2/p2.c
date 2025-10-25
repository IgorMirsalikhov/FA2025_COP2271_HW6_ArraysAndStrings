#include "ctype.h"
#include "string.h"


void text_statistics(const char *str);

int main(void) {
    char *str = get_string("Enter a string: ");

    //function call
    text_statistics(str);

    return 0;
}
