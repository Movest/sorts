#include <string>
#include <vector>

void QuickSort(std::vector<std::string>* array, int first, int last)
{
    int i = first, j = last;
    std::string tmp, x = (*array)[first];
    do {
        while ((*array)[i] < x) {
            i++;
        }
        while ((*array)[j] > x) {
            j--;
        }
        if (i <= j) {
            tmp = (*array)[i];
            (*array)[i] = (*array)[j];
            (*array)[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);
    if (i < last) {
        QuickSort(array, i, last);
    }
    if (first < j) {
        QuickSort(array, first, j);
    }
    return;
}