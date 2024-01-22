#include <stdio.h>
#include <string.h>
#include <strings.h>

int isPalindrome(int x) {

    if(x <= 0){
        return 0;
    }
    else {
        int digits = 0;
        int originalNum = x;
        while(x != 0) {
            x /= 10;
            digits++;
        }
        printf("%d\n", digits);

        char str[20];
        snprintf(str, sizeof(str), "%d", originalNum);

        for(int i = 0; i < digits / 2; i++) {
            if(str[i] != str[digits - i - 1]){
                return 0;
            }
        }
        return 1;
    }
}
 
int main() {
    int num = 0;
    int letSay = isPalindrome(num);
    printf("%d", letSay);
    // char str[10];
    // snprintf(str, sizeof(str), "%d", num);
    // printf("%s", str);
    

    return 0;
}