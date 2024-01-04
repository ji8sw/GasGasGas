#include <iostream>
int main() {
    for (unsigned long long Index = 0; Index < 50000000000; Index++)
        std::cout << "A" + Index;
    return 0;
}