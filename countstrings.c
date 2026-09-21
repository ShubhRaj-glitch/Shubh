// Count characters in a string without using built-in length functions.


int countChars(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}   