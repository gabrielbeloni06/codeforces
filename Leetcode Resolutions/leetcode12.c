char* intToRoman(int num) {
    static char romano[16];
    int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0, pos = 0;
    while (num > 0) {
        while (num >= v[i]) {
            const char* s = simbolos[i];
            for (int j = 0; s[j] != '\0'; j++) {
                romano[pos++] = s[j];
            }
            num -= v[i];
        }
        i++;
    }
    romano[pos] = '\0';
    return romano;
}