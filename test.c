#include <stdio.h>
#include "riscv.c"

int main()
{
    /*char str[] = "LW X7 1000(X5)";
 
    // Returns first token
    char* token = strtok(str, " ");
 
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }*/
    interpret("LW X7 1000(X5)");
    return 0;
}