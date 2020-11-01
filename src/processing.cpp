#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> ReadFile(const char path[])
{
    std::ifstream file(path);
    std::vector<std::string> strings_array;
    std::string temp;
    if (file.is_open()) {
        std::cout << "success" << std::endl;
    } else {
        std::cout << "error..." << std::endl;
        return strings_array;
    }
    while (!file.eof()) {
        getline(file, temp);
        strings_array.push_back(temp);
    }
    file.close();
    return strings_array;
}

void PrintArray(std::vector<std::string> array)
{
    for (size_t i = 0; i < array.size(); i++) {
        if (i % 5 == 0) {
            std::cout << std::endl;
        }
        std::cout << array[i] << "   ";
    }
    std::cout << std::endl;
}