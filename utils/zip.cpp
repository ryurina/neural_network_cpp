#include <vector>
#include <utility>

template <typename T1, typename T2>
std::vector<std::pair<T1, T2>> zip(const std::vector<T1>& a, const std::vector<T2>& b) {
    std::vector<std::pair<T1, T2>> result;
    size_t n = std::min(a.size(), b.size());
    result.reserve(n);
    for (size_t i = 0; i < n; ++i) {
        result.emplace_back(a[i], b[i]);
    }
    return result;
}



/* Example usage:
 * std::vector<int> nums = {1, 2, 3};
 * std::vector<std::string> names = {"a", "b", "c"};
 * for (auto& [n, s] : zip(nums, names)) {
 *     std::cout << n << " " << s << "\n";
 * }
 */ 
