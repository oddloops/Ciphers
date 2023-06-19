#include "ciphers.h"

char convertAlpha (char alphabet, int letterPlaces, int numPlaces) {
    int ascii = int(alphabet);
    // if it is a number
    if (isdigit(alphabet)) {
        ascii = (((ascii - 48) + numPlaces) % 10) + 48;
    }
    if (isupper(alphabet)) {
        ascii = (((ascii - 65) + letterPlaces) % 26) + 65;
    }
    if (islower(alphabet)) {
        ascii = (((ascii - 97) + letterPlaces) % 26) + 97;
    }
    return char(ascii);
}

std::string convertCaeser (std::string phrase, int places) {
    for (std::string::size_type i = 0; i < phrase.length(); i++) {
        phrase[i] = convertAlpha(phrase[i], places, 0);
    }
    return phrase;
}

