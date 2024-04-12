#include <iostream>
#include "maxElem.h"

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << getMaxElem<int>(arr, 5) << endl;

    return 0;
}
