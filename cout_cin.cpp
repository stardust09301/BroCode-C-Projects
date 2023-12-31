#include <iostream>


// cout << (insertion operator)
// cin >> (extraction operator)

int main() {

    std::string name;
    int age;
    
    std::cout << "What's your name?: ";
    // To use, check run in terminal in code runner
    std::cin >> name;
    
    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name); // to read string with spaces, we need getline

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '.' << '\n';
    std::cout << "You are " << age << " years old" << '.';

    return 0;
}