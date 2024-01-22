#include <stdio.h>
 
int main() {
    char *strings[] = {"HEllp", "World", "Kya", "Bolti", "Tum"};
    // for(int i = 0; i < sizeof(strings) / sizeof(strings[i]); i ++) {
    //     printf("%s \n" , strings[i]);
    //     // for(int j = 0; j < sizeof(strings[i]); j++) {
    //     //     printf("%c", strings[i][j]);
    //     // }
    // }
    printf("%s", strings[2][0]);
    return 0;
}