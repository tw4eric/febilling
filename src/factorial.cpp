#include <factorial.hpp>

int Factorial::operator()(int n) {
    if (n <= 0)
        return 1;
    return operator()(n - 1) * n;
}
