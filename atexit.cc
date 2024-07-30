#include <iostream>

int main() {
    auto ret = std::atexit([](){
        std::cout << "atexit\n";
    });
    if (ret != 0) {
        std::cout << "atexit failed\n";
    }
    std::cout << "main\n";
    return 0;
}