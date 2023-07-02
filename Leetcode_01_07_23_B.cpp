//2761. Prime Pairs With Target Sum

class Solution {
public:
//   bool isPrime(int num) {
//     if (num < 2) {
//         return false;
//     }
//     for (int i = 2; i <= sqrt(num); ++i) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
 bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
} 
    vector<vector<int>> findPrimePairs(int n) {
    std::vector<std::vector<int>> pairs;
    for (int x = 2; x <= n / 2; ++x) {
        int y = n - x;
        if (isPrime(x) && isPrime(y)) {
            pairs.push_back({x, y});
        }
    }
    std::sort(pairs.begin(), pairs.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];
    });
    return pairs;
    }
};
