#include <iostream>
#include <unordered_map>
int main()
{

    std::cout << " Enter The string ";
    std::string s;
    std::cin >> s;
    std::unordered_map<char, int> freq;
    bool appear = false;
    for (int i = 0; i < s.length(); ++i)
    {
        char c = s[i];
        freq[c]++;
    }
    for (int i = 0; i < s.length(); ++i)
    {
        char c = s[i];
        if (freq[c] == 1)
        {
            appear = true;
            std::cout << c << "\n";
            break;
        }
    }

    if (!appear)
        std::cout << -1 << "\n";

    return 0;
}