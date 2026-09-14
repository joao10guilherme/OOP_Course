#include <iostream>

void countdown(int n);
void countup(int n);
int power(int base, int exponent);
void printBinary(int number);

int main(){

    int n = 10;

    // countdown(n);
    // std::cout << "\n";
    // countup(n);

    power(2, 10);

    return 0;
}

void countdown(int n){
    // Base case
    if(n <= 0){
        return;
    }
    std::cout << n << "\t";
    countdown(n-1);
}

void countup(int n){
    if(n <= 0){
        return;
    }

    countup(n - 1);
    std::cout << n << "\t";
}

int power(int base, int exponent){
    if(exponent == 0){
        printf("I am power (%d, %d). I know the answer is 1\n\n", base, exponent);
        return 1;
    }
    printf("I am the power (%d, %d).\n", base, exponent);
    printf("I remember %d and ask power (%d, %d) for help!\n\n", base, base, exponent);
    int help = power(base, exponent - 1);
    printf("I am the power (%d, %d).\n", base, exponent);
    printf("power (%d, %d) returned me %d.\n", base, exponent - 1, help);
    printf("I will do %d * %d = %d and return the result\n\n", base, help, base * help);
    return base * help;
}

void printBinary(int number){
    if(number < 2){
        std::cout << number;
        return;
    }

    printBinary(number / 2);
    std::cout << number % 2;
}