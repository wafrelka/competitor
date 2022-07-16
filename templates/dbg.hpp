#include <vector>
#include <array>
#include <iostream>

template<typename T>
std::ostream& operator<<(std::ostream& stream, std::vector<T>& vec) {
    stream << '{';
    for(size_t i = 0; i < vec.size(); i++) {
        stream << vec[i] << (i + 1 == vec.size() ? "" : ", ");
    }
    stream << '}' << std::endl;
    return stream;
}

template<typename T, size_t N>
std::ostream& operator<<(std::ostream& stream, std::array<T, N>& arr) {
    stream << '{';
    for(size_t i = 0; i < arr.size(); i++) {
        stream << arr[i] << (i + 1 == arr.size() ? "" : ", ");
    }
    stream << '}' << std::endl;
    return stream;
}

#define PRINT_LINE() { std::cerr << "\e[2m[L" << __LINE__ << "]\e[m "; }
#define PRINT_VALUE(s,t,u) {std::cerr << (s) << " \e[2m=\e[m \e[1m" << (t) << "\e[m" << (u); }
#define SELECT_9TH(x1,x2,x3,x4,x5,x6,x7,x8,x9,...) x9
#define dbg1(x1) PRINT_VALUE(#x1,x1,std::endl)
#define dbg2(x1,x2) PRINT_VALUE(#x1,x1,", ")dbg1(x2)
#define dbg3(x1,x2,x3) PRINT_VALUE(#x1,x1,", ")dbg2(x2,x3)
#define dbg4(x1,x2,x3,x4) PRINT_VALUE(#x1,x1,", ")dbg3(x2,x3,x4)
#define dbg5(x1,x2,x3,x4,x5) PRINT_VALUE(#x1,x1,", ")dbg4(x2,x3,x4,x5)
#define dbg6(x1,x2,x3,x4,x5,x6) PRINT_VALUE(#x1,x1,", ")dbg5(x2,x3,x4,x5,x6)
#define dbg7(x1,x2,x3,x4,x5,x6,x7) PRINT_VALUE(#x1,x1,", ")dbg6(x2,x3,x4,x5,x6,x7)
#define dbg8(x1,x2,x3,x4,x5,x6,x7,x8) PRINT_VALUE(#x1,x1,", ")dbg7(x2,x3,x4,x5,x6,x7,x8)
#define dbg(...) PRINT_LINE()\
SELECT_9TH(__VA_ARGS__,dbg8,dbg7,dbg6,dbg5,dbg4,dbg3,dbg2,dbg1)(__VA_ARGS__)
