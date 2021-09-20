#include <stdio.h>
#include <stdlib.h>

void clean_stdin(void) {
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int countingValleys(int steps, char* path) {
    int seaLevel = 0, countValley = 0;

    for(int i = 0; i < steps; ++i) {
        if(path[i] == 'U') ++seaLevel;
        if(path[i] == 'D') --seaLevel;

        if(path[i] == 'U' && seaLevel == 0)
            ++countValley;
    }

    return countValley;
}

int main() {
    int n;
    scanf("%d", &n);

    char *path = (char*) malloc(n * sizeof(char));
    clean_stdin();

    for(int i = 0; i < n; ++i) {
        scanf("%c", &path[i]);
    }

    printf("%d", countingValleys(n, path));
    free(path);
    return 0;
}
