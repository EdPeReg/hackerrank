#include <iostream>

int countingValleys(std::string& path) 
{
    int seaLevel = 0, level = 0, countingVall = 0;
    bool cross = false;
    
    for(char& step : path) {
        if(step == 'D') { 
            --level;
        } else {
            ++level;
        }
        
        if(!cross and level < seaLevel) {
            ++countingVall;
            cross = true;
        } else if(level == seaLevel) 
            cross = false;
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
