#include <stdio.h>
#include <string.h>

size_t ocurrences(char str[1024], char c)
{
    size_t counter = 0;
    for(size_t i = 0; i < strlen(str); ++i) {
        if(str[i] == c) ++counter;
    }
    return counter;
}

size_t repeated_string(char str[1024], size_t n)
{
    size_t total = n / strlen(str) * ocurrences(str, 'a');
    int remainder = n % strlen(str);
    char substr[remainder+1];

    // Get a substring.
    strncpy(substr, &str[0], remainder);
    substr[remainder] = '\0';
    return total + ocurrences(substr, 'a');
}

int main() {
    char str[1024] = {'\0'};
    size_t n;
    scanf("%s%zu", str, &n);
    printf("%zu", repeated_string(str, n));

    return 0;
}
