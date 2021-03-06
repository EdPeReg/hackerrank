#include <stdio.h>
#include <stdlib.h>

int jumpingOnClouds(int c_count, int *c)
{
    int jumps = 0;
    for(int i = 0; i < c_count - 1; ++i)
    {
        // If you are in a cloud, always jump two clouds, you can jump
        // twice because you have the ++i from the if and ++i from the for.
        // If you are in a thunderhead, just jump 1.
        if(c[i] == 0) ++i;
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
