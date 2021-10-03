#include <iostream>
#include <vector>

int jumpingOnClouds(std::vector<int> c)
{
    int jumps = 0;
    const int CLOUD = 0;

    for(size_t i = 0; i < c.size() - 1;)
    {
        (c[i+2] == CLOUD) ? i += 2 : ++i;
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