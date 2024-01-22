#include <stdio.h>

int isValid(char* s) {
    char stack[10010];
    int top = -1, i = 0;

    while(s[i] != '\0') {
        if((s[i] == '(' || s[i] == '{' || s[i] == '[')){
            stack[++top] = s[i];
        }
        else if(top == -1 || ((s[i] == ')' && stack[top] != '(')  ||  
                (s[i] == '}' && stack[top] != '{')  ||  
                (s[i] == ']' && stack[top] != '['))) return 0;
        else {
            top--;
        }
        i++;
    }
    return top == -1;
}
 
int main() {
    char s[] = "[]";
    int result = isValid(s);
    printf("%d", result);
    
    return 0;
}