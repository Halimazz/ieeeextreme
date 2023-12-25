#include <iostream>
#include <vector>
#include <map>

const int MOD = 998244353;

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> strings;
    std::map<char, int> counts;

    for (int i = 0; i < m; ++i) {
        std::string s;
        std::cin >> s;
        strings.push_back(s);
    }

    long long result = 1;

    for (int i = 0; i < n; ++i) {
        counts.clear();
        for (const std::string& s : strings) {
            if (i < s.length()) {
                counts[s[i]]++;
            }
        }

        long long local_result = 0;

        for (const auto& kv : counts) {
            local_result += kv.second * kv.second;
            local_result %= MOD;
        }

        result *= local_result;
        result %= MOD;
    }

    std::cout << result << std::endl;

    return 0;
}
