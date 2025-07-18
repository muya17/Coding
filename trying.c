#include <stdio.h>

int main() {
    char name[100];
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    // Remove newline character if present
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }
    
    printf("Hello, %s!\n", name);
    return 0;
}