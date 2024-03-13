#include <iostream>

#define MAX_PASSENGERS_COUNT 20
#define FILL_TRAIN(array, func) for(int i = 0; i < 10; i++) {(array[i]) = (func(i));}
#define CHECK_WAGONS(array, func, result) for(const auto& value: array) { (result) += ((func(value)) ? (1) : (0)); }
#define COUNT_TOTAL(array, result) for(const auto& value: array) { (result) += (value); }

int fill_train(int i){
    int passengers_count;
    std::cout << "Enter count of passengers on " << i + 1 << " wagon: ";
    std::cin >> passengers_count;
    return passengers_count;
}
bool overcrowded(int count){
    return count > MAX_PASSENGERS_COUNT;
}

bool underloaded(int count){
    return count < MAX_PASSENGERS_COUNT;
}
int main()
{
    std::cout << "***************** Analysis of the occupancy of wagons on the train *****************\n\n";
    int train[10];
    
    FILL_TRAIN(train, fill_train);

    int overcrowded_сount = 0;
    int underloaded_сount = 0;
    int passengers_сount = 0;

    CHECK_WAGONS(train, overcrowded, overcrowded_сount);
    CHECK_WAGONS(train, underloaded, underloaded_сount);
    COUNT_TOTAL(train, passengers_сount);

    std::cout << "Overcrowded wagons count:    " << overcrowded_сount;
    std::cout << std::endl;
    std::cout << "Not fullfilled wagons count: " << underloaded_сount;
    std::cout << std::endl;
    std::cout << "Total passengers count:      " << passengers_сount;
    std::cout << std::endl<< std::endl;
}