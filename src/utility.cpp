#include "../include/utility.h"
#include <cctype>
using namespace std;

bool isNumber(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) return false;
    }
    return true;
}