bool isAlphabetic(string& str) {
    for (char ch : str) {   // iterate over all the characters in the given string
        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
            return false;   // if non-alphabetic character found return false
        }
    }
    return true;
}