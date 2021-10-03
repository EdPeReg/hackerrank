#include <iostream>
#include <vector>

int jumpingOnClouds(std::vector<int> c)
{
    int jumps = 0;

    for(size_t i = 0; i < c.size() - 1;)
    {
        // Remember that we have an array of 1 = true or 0 = false.
        c[i+2] ? ++i : i += 2;
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
