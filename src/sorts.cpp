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

void ShellSort(std::vector<std::string>* array, int size)
{
    int i, j, step;
    std::string tmp;
    for (step = size / 2; step > 0; step /= 2)
        for (i = step; i < size; i++) {
            tmp = (*array)[i];
            for (j = i; j >= step; j -= step) {
                if (tmp < (*array)[j - step]) {
                    (*array)[j] = (*array)[j - step];
                } else
                    break;
            }
            (*array)[j] = tmp;
        }
    return;
}