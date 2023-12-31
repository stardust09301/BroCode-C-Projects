#include <iostream>

int main(){
    std::cout << "I like pizza!" << '\n';
    //You could use either but endl will flush the buffer.
    std::cout << "It's really good!" << std::endl;

    int x; // declaration
    x = 7; // assignment

    // You could write like this
    int y = 5;
    int z = 9;
    int sum = x + y + z;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';
    std::cout << sum << '\n';

    // int(whole number; integer) 
    int age = 41;
    int year = 2023;
    int days = 7.8;

    // double(number including decimal)
    double price = 10.99;
    double gpa = 3.9;
    double temperature = 36.5;

    std::cout << price << '\n';;
    std::cout << days << '\n';; // truncated

    // single character
    char grade = 'A'; // You need single quotes
    char initial = 'B';
    char dollarSign = '$';

    std::cout << initial << '\n';
    std::cout << dollarSign << '\n';

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // string (objects that represent a sequence of text)
    // provided from standard namespace
    std::string name = "Bro";
    std::string day = "Sunday";
    std::string food = "pasta";
    std::string address = "123 Toronto St.";

    std::cout << "Hello " << name << "!" << '\n';
    std::cout << "You are " << age << " years old" <<'\n';

    return 0;
}