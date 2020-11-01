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
    for (size_t i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}