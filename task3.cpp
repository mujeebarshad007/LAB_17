#include <unordered_map>
#include <iostream>

int main()
{
    int n, target;
    bool found = false;

    std::cout << "Enter the size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the values: ";
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    std::cout << "Enter the target sum: ";
    std::cin >> target;

    std::unordered_map<int, int> map;

    for (int i = 0; i < n; ++i)
    {
        map[arr[i]] = i;
    }

    for (int i = 0; i < n; ++i)
    {
        int dif = target - arr[i];

        if (map.find(dif) != map.end())
        {
            int j = map[dif];
            if (i != j)
            {
                found = true;
                std::cout << std::min(i, j) << " " << std::max(i, j) << std::endl;
                break;
            }
        }
    }

    if (!found)
    {
        std::cout << -1 << std::endl;
    }
    return 0;
}