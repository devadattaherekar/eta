//When multiple threads access shared data, problems called race conditions occur
//To prevent this we use std::mutex


#include <iostream>
#include <thread>
#include <mutex>

int counter = 0;
std::mutex m;

void increment() {

    for(int i = 0; i < 1000; i++) {
        m.lock();
        counter++;
        m.unlock();
    }
}

int main() {

    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << counter;
}