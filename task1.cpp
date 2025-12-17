#include <iostream>
#include <unordered_map>
int main()
{

    std::unordered_map<int, std::string> map;
    map.insert({1, "Mujeeb"});
    map.insert({2, "Hasnain"});
    map.insert({3, "Saif"});

    map[1] = "Sir Rabeeh";
    if (map.find(1) != map.end())
    {
        std::cout << " Found key\t " << map.at(1) << std::endl;
    }
    else
    {
        std::cout << " Not found";
    }

    return 0;
}