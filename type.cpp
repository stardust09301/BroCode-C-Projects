#include<iostream>

int main()
{
// type conversion = conversion a value of one data type to another 
//                      Implicit =automatic
//                      Explicit = Precede value with new data type (int)

int correct = 8;
int questions = 10;
double score = correct/(double)questions * 100;
//double score = correct/questions * 100; // gives us 0  since it will be truncated
std::cout <<score << "%";

return 0; 
}