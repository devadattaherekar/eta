#include <iostream>
#include <thread>

void task(int id) {
    std::cout << "Thread " << id << " running\n";
}

int main() {

    std::thread t1(task, 1);
    std::thread t2(task, 2);
    std::thread t3(task, 3);

    t1.join();
    t2.join();
    t3.join();
}