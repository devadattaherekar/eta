#include <iostream>
#include <thread>

void printHello() {
    std::cout << "Hello from thread\n";
}

int main() {
    std::thread t(printHello);  // create thread
    t.join();                   // wait for thread to finish
}