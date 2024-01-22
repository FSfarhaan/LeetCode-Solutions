#include <stdio.h>

int romanToInt(char * s) {
    int i = 0, j = 1, total = 0;
    while(s[i] != '\0') {
        if(s[i] == 'I') {
            total += 1;
            if(s[j] == 'V' || s[j] == 'X') total -= 2;
        }
        else if(s[i] == 'V') total += 5;
        else if(s[i] == 'X') {
            total += 10;
            if(s[j] == 'L' || s[j] == 'C') total -= 20;
        }
        else if(s[i] == 'L') total += 50;
        else if(s[i] == 'C') {
            total += 100;
            if(s[j] == 'D' || s[j] == 'M') total -= 200;
        }
        else if(s[i] == 'D') total += 500;
        else if(s[i] == 'M') total += 1000;

        else printf("Invalid input");
        i++; j++;
    }
    return total;
}

int main() {
    // printf("Hello world");
    char abc []= "XV";
    int abcd = romanToInt(abc);
    printf("%d", abcd);
    return 0;
}
