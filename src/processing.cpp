#include <string>
#include <fstream>
#include <vector>
#include <iostream>

std::vector<std::string> ReadFile(const char path[]){
    std::ifstream file(path);
    std::vector<std::string> strings_array;
    std::string temp;
    if(file.is_open()){
        std::cout << "success" << std::endl; 
    }
    else
    {
        std::cout << "error..." << std::endl;
        return strings_array;
    }
    while(!file.eof()){
        getline(file,temp);
        strings_array.push_back(temp);
    }
    file.close();
    return strings_array;
}