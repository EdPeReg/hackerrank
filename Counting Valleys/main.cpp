#include <iostream>

int countingValleys(std::string& path) 
{
    int seaLevel = 0, valleyCount = 0;

    for(char& step : path) 
    {
        if(step == 'U') ++seaLevel;
        else         --seaLevel;

        if(step == 'U' and seaLevel == 0)
            ++valleyCount;
    }

    return valleyCount;
}

int main() {
    int n;
    std::string path;
    std::cin >> n >> path;

    std::cout << countingValleys(path);

    return 0;
}
