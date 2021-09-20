#include <iostream>

int countingValleys(std::string& path) 
{
    int level = 0, countingVall = 0;

    for(char& step : path) {
        if(step == 'U') {
            ++level;
        } else if(step == 'D') {
            if(level == 0)
                ++countingVall;
            --level;
        }
    }
    return countingVall;
}

int main() {
    int n;
    std::string path;
    std::cin >> n >> path;

    std::cout << countingValleys(path);

    return 0;
}
