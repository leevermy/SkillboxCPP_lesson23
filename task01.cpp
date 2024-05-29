#include <iostream>
 
#define DAY_0 "Monday"
#define DAY_1 "Tuesday"
#define DAY_2 "Wednesday"
#define DAY_3 "Thursday"
#define DAY_4 "Friday"
#define DAY_5 "Saturday"
#define DAY_6 "Sunday"
 
#define DAY_OF_WEEK(count) DAY_ ## count 
 
int main() {
    int day =3;
    std::cout << "Enter the day of the week (1-7): ";
    std::cin >> day;

    if (day < 1 || day > 7) {
        std::cerr << "Invalid day number. Please enter a number between 1 and 7." << std::endl;
        return 1;
    }

    switch(day) {
        case (1): std::cout << "The day of the week is " << DAY_OF_WEEK(0) << std::endl; break;
        case (2): std::cout << "The day of the week is " << DAY_OF_WEEK(1) << std::endl; break;
        case (3): std::cout << "The day of the week is " << DAY_OF_WEEK(2) << std::endl; break;
        case (4): std::cout << "The day of the week is " << DAY_OF_WEEK(3) << std::endl; break;
        case (5): std::cout << "The day of the week is " << DAY_OF_WEEK(4) << std::endl; break;
        case (6): std::cout << "The day of the week is " << DAY_OF_WEEK(5) << std::endl; break;
        case (7): std::cout << "The day of the week is " << DAY_OF_WEEK(6) << std::endl;
    }

    return 0;
}