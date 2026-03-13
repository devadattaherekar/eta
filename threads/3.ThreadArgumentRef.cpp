#include <iostream>
#include <thread>

void increment(int &x) {
    x++;
}

int main() {

    int value = 5;

    std::thread t(increment, std::ref(value));
    t.join();

    std::cout << value;
}