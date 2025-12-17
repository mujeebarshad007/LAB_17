#include <iostream>
#include <unordered_map>
int main()
{

    int N;
    std::cin >> N;
    std::unordered_map<int, int> freq;
    for (int i = 0; i < N; i++)
    {
        int x;
        std::cin >> x;
        freq[x]++;
    }

    int ans = 0, mx = 0;

    for (const std::pair<int, int> &p : freq)
    {
        if (p.second > mx || (p.second == mx && p.first < ans))
        {
            mx = p.second;
            ans = p.first;
        }
    }
    std::cout << ans << std::endl;

    return 0;
}