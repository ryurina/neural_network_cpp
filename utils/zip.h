#ifndef ZIP_H
#define ZIP_H

#include <algorithm>
#include <cstddef>
#include <utility>
#include <vector>

template <typename T1, typename T2>
std::vector<std::pair<T1, T2>>
zip(const std::vector<T1>& a, const std::vector<T2>& b)
{
    std::vector<std::pair<T1, T2>> result;

    std::size_t n = std::min(a.size(), b.size());
    result.reserve(n);

    for (std::size_t i = 0; i < n; ++i) {
        result.emplace_back(a[i], b[i]);
    }

    return result;
}

#endif
