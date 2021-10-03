#include <stdio.h>
#include <stdlib.h>

int jumpingOnClouds(int c_count, int *c)
{
    int jumps = 0;
    for(int i = 0; i < c_count - 1;)
    {
        c[i+2] ? ++i : (i += 2);
        ++jumps;
    }

    return jumps;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *clouds = (int*) malloc(sizeof(int) * n);

    for(int i = 0; i < n; ++i)
        scanf("%d", &clouds[i]);

    printf("%d ", jumpingOnClouds(n, clouds));

    free(clouds);
    return 0;
}
