#include "processing.hpp"
#include "sorts.hpp"
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> array;
    const char path[] = "./text/example.txt";
    array = ReadFile(path);
    PrintArray(array);
    QuickSort(&array, 0, array.size() - 1);
    std::cout << "Sorted" << std::endl;
    PrintArray(array);
    return 0;
}