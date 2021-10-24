#include <iostream>
#include <algorithm>

long repeated_string(std::string& s, long n)
{
    long total = n / s.size();
    int left = n % s.size();

    total = total * std::count(s.begin(), s.end(), 'a');
    std::string substr = s.substr(0,left);
    return total + std::count(substr.begin(), substr.end(), 'a');
}

int main() {
    std::string s;
    long n;
    std::cin >> s >> n;

    std::cout << repeated_string(s, n) << '\n';
    return 0;
}
