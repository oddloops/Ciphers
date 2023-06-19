#include "caeser.h"

char convertAlpha (char alphabet, int places) {
    int ascii = int(alphabet);
    // if it is a number
    if (isdigit(alphabet)) {
        ascii = (((ascii - 48) + places) % 10) + 48;
    }
    if (isupper(alphabet)) {
        ascii = (((ascii - 65) + places) % 26) + 65;
    }
    if (islower(alphabet)) {
        ascii = (((ascii - 97) + places) % 26) + 97;
    }
    return char(ascii);
}

std::string convertCaeser (std::string phrase, int places) {
    for (std::string::size_type i = 0; i < phrase.length(); i++) {
        phrase[i] = convertAlpha(phrase[i], places);
    }
    return phrase;
}

