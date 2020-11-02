#include <catch.hpp>
#include <processing.hpp>
#include <string>
#include <vector>

TEST_CASE("ReadFile", "[test]")
{
    std::vector<std::string> array;
    GIVEN("Path")
    {
        const char path[] = "./text/example.txt";
        WHEN("Reading")
        {
            array = ReadFile(path);
            THEN("Compare")
            {
                std::string expected = "truth";
                REQUIRE(expected == array[0]);
            }
        }
    }
    std::vector<std::string> array_2;
    GIVEN("Wrong path")
    {
        const char path[] = "./text2321/example.txt";
        WHEN("Reading")
        {
            array = ReadFile(path);
            THEN("Compare")
            {
                size_t array_size = 0;
                REQUIRE(array_size == array_2.size());
            }
        }
    }
    array.clear();
    array_2.clear();
}