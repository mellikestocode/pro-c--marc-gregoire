#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

// Simple mutual exclusion example using std::mutex.
// Two threads increment the same shared counter safely.

int main() {
    int counter = 0;
    std::mutex mtx;
    const int increments = 100000;

    auto worker = [&](int id) {
        for (int i = 0; i < increments; ++i) {
            std::lock_guard<std::mutex> lock(mtx);
            ++counter;
        }
    };

    std::thread t1(worker, 1);
    std::thread t2(worker, 2);

    t1.join();
    t2.join();

    std::cout << "Final counter value: " << counter << '\n';
    std::cout << "Expected counter value: " << increments * 2 << '\n';

    return 0;
}
