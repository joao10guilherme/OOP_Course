#include <iostream>
#include <random>
#include <ctime>

int main(){

    // generate the seed
    // std::random_device rd;

    // std::mt19937 eng(rd());

    // // Define distribution of random numbers
    // std::uniform_int_distribution<int> dist(1,100);

    // int i = 1;
    // while(i<100){
    //     std::cout << dist(eng) << std::endl;
    //     i++;
    // }

    // TODO print the sum and average of random numbers

    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<int> dist(1, 100);

    int i = 1;
    int sum = 0;
    while(i < 100){
        int actual = dist(eng);
        std::cout << i << ": " << actual;
        sum += actual;
    }
    
    std::cout << "Average: " << sum / i;

    return 0;
}