#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <sorts.hpp>
#include <string>
#include <vector>

TEST_CASE("QuickSort", "[test]")
{
    std::vector<std::string> array;
    std::vector<std::string> sorted_array;
    GIVEN("VECTOR TO SORT")
    {
        array = {"bad", "123", "OK", "4tr1"};
        sorted_array = {"bad", "123", "OK", "4tr1"};
        WHEN("Sorting")
        {
            QuickSort(&sorted_array, 0, sorted_array.size() - 1);
            THEN("Compare")
            {
                std::string expected = "123";
                REQUIRE(expected == sorted_array[0]);
            }
        }
    }
    GIVEN("VECTOR TO SORT")
    {
        array = {"bad", "ok3214", "OK", "4tr1"};
        sorted_array = {"bad", "ok3214", "OK", "4tr1"};
        WHEN("Sorting")
        {
            QuickSort(&sorted_array, 0, sorted_array.size() - 1);
            THEN("Compare")
            {
                std::string expected = "4tr1";
                REQUIRE(expected == sorted_array[0]);
            }
        }
    }
    array.clear();
    sorted_array.clear();
}
TEST_CASE("ShellSort", "[test]")
{
    std::vector<std::string> array;
    std::vector<std::string> sorted_array;
    GIVEN("VECTOR TO SORT")
    {
        array = {"bad", "123", "OK", "4tr1"};
        sorted_array = {"bad", "123", "OK", "4tr1"};
        WHEN("Sorting")
        {
            ShellSort(&sorted_array, sorted_array.size());
            THEN("Compare")
            {
                std::string expected = "123";
                REQUIRE(expected == sorted_array[0]);
            }
        }
    }
    GIVEN("VECTOR TO SORT")
    {
        array = {"bad", "ok3214", "OK", "4tr1"};
        sorted_array = {"bad", "ok3214", "OK", "4tr1"};
        WHEN("Sorting")
        {
            ShellSort(&sorted_array, sorted_array.size());
            THEN("Compare")
            {
                std::string expected = "4tr1";
                REQUIRE(expected == sorted_array[0]);
            }
        }
    }
    array.clear();
    sorted_array.clear();
}

TEST_CASE("BubbleSort", "[test]")
{
    std::vector<std::string> array;
    std::vector<std::string> sorted_array;
    GIVEN("VECTOR TO SORT")
    {
        array = {"bad", "123", "OK", "4tr1"};
        sorted_array = {"bad", "123", "OK", "4tr1"};
        WHEN("Sorting")
        {
            BubbleSort(&sorted_array, sorted_array.size());
            THEN("Compare")
            {
                std::string expected = "123";
                REQUIRE(expected == sorted_array[0]);
            }
        }
    }
    GIVEN("VECTOR TO SORT")
    {
        array = {"bad", "ok3214", "OK", "4tr1"};
        sorted_array = {"bad", "ok3214", "OK", "4tr1"};
        WHEN("Sorting")
        {
            BubbleSort(&sorted_array, sorted_array.size());
            THEN("Compare")
            {
                std::string expected = "4tr1";
                REQUIRE(expected == sorted_array[0]);
            }
        }
    }
    array.clear();
    sorted_array.clear();
}