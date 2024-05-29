#include <iostream>
#include <vector>
#include <string>

#define CALL(func, arr, size) \
    for (int i = 0; i < size; ++i) { \
        func(arr[i], i); \
    }

#define COUNT(func, arr, size, total) \
    for (int i = 0; i < size; ++i) { \
        func(arr[i], total); \
    }

void fillCarriages(int &passengers, int index) {
    std::cout << "Etner the number of passengers for " << index + 1 << " carriage\n";
    std::cin >> passengers;

}
void checkOverfilled(const int passengers, int index) {
    if (passengers > 20) {
        std::cout << "Carriage " << index + 1 << " is overfilled with " << passengers << " passengers.\n";
    }
}
void checkUnderfilled(int passengers, int index) {
    if (passengers < 20) {
        std::cout << "Carriage " << index + 1 << " has empty seats with only " << passengers << " passengers.\n";
    }
}
void countPassengers(int passengers, int& total) {
    total += passengers;
}

int main() {
    const int num_carriages = 5;
    std::vector<int> passengers(num_carriages);
    
    std::cout << "Enter the number of passengers in each of the 10 carriages:\n";
    CALL(fillCarriages, passengers, num_carriages);

    std::cout << "\nAnalyzing carriages..." << std::endl;
    CALL(checkOverfilled, passengers, num_carriages);
    CALL(checkUnderfilled, passengers, num_carriages);

    int total_passengers = 0;
    COUNT(countPassengers, passengers, num_carriages, total_passengers);
    std::cout << "Total number of passengers: " << total_passengers << std::endl;

    return 0;
}
