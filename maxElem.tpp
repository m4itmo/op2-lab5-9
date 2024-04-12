#include "maxElem.h"

template<typename T>
T getMaxElem(T *arr, int size) {
    T max = arr[0];

    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}
