#include <iostream>
#include <array>

int main() {
    std::array<int, 5> myarray = {1, 2, 3, 4, 5};
    std::cout << "myarray contains:";
    for (auto it = myarray.begin(); it != myarray.end(); ++it) {
        std::cout << ' ' << *it;
    }
    std::cout << '\n';

    return 0;
}
