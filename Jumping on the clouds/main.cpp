#include <iostream>
#include <vector>

int jumpingOnClouds(std::vector<int> c)
{
    int jumps = 0;

    for(size_t i = 0; i < c.size() - 1; ++i)
    {
        // If you are in a cloud, always jump two clouds, you can jump
        // twice because you have the ++i from the if and ++i from the for.
        // If you are in a thunderhead, just jump 1.
        if(c[i] == 0) ++i;
        ++jumps;
    }

    return jumps;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> clouds(n, 0);

    for(int &cloud : clouds)
        std::cin >> cloud;

    std::cout << jumpingOnClouds(clouds);

    return 0;
}
