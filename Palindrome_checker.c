#include <stdio.h>
#include <string.h>

void reverseString(char str[], char rev[]) {
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';
}

int isPalindrome(char str[]) {
    char rev[100];
    reverseString(str, rev);
    return strcmp(str, rev) == 0;
}

void displayTogether(char str[], char rev[]) {
    printf("\nOriginal: %s\n", str);
    printf("Reversed:  %s\n", rev);
    if(isPalindrome(str)) {
        printf("PALINDROME DETECTED!\n");
    } else {
        printf("Not a Palindrome\n");
    }
}

int main() {
    char input[100];
    
    printf(" \nC MINI PROJECT\n");
    printf("PALINDROMIC STRING ANALYZER\n");
    
    printf("\nEnter a string to analyze: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;  
    
    char reversed[100];
    reverseString(input, reversed);
    
    displayTogether(input, reversed);
    
    printf("\n Project completed successfully!\n");
    return 0;
}
