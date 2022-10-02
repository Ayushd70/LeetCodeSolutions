#include <cmath>
#include <iostream>
#include <memory>

class Solution {
public:
    int mySqrt(int x) {
        long long l(1), h(x), mid(0), res(0);
        while (l <= h) {
            mid = (l + h) / 2;
            long long msq = mid * mid;
            if (msq == x) {
                return mid;
            } else if (msq > x) {
                h = mid - 1;
            } else {
                l = mid + 1;
                res = mid;
            }
        }
        return res;
    }
};

int main(int argc, char** argv) {
    int val(atoi(argv[1]));
    std::unique_ptr<Solution> ptr(new Solution());
    std::cout << ptr->mySqrt(val) << std::endl;

    return 0;
}