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
    while (true) {
        size_t key;
        std::cout << std::endl << "Menu" << std::endl;
        std::cout << "1 - PrintArray" << std::endl;
        std::cout << "2 - QuickSort" << std::endl;
        std::cout << "3 - ReadFile" << std::endl;
        std::cout << "0 - Exit" << std::endl;
        std::cout << "Input key: ";
        std::cin >> key;
        std::cout << std::endl;
        if (key == 0) {
            break;
        }
        switch (key) {
        case 1:
            PrintArray(array);
            break;
        case 2:
            QuickSort(&array, 0, array.size() - 1);
            break;
        case 3:
            array = ReadFile(path);
            break;
        default:
            break;
        }
    }
    array.clear();
    return 0;
}