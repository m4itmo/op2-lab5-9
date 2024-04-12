#include <iostream>
#include "maxElem.h"
#include "queue.h"
#include "exception"

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << getMaxElem<int>(arr, 5) << endl;

    queue<int> q(15);


    try {
        cout << q.first() << " - " << q.last() << endl;
    } catch (exception &err) {
        cout << err.what() << endl;
    }

    for (int i = 0; i < 5; ++i)
        q.push(i + 10);

    for (int i = 0; i < 5; ++i)
        cout << q.pop() << ' ';
    cout << endl;

    try {
        for (int i = 0; i < 100000000; ++i)
            q.push(i + 20);
    } catch (exception &err) {
        cout << err.what() << endl;
    }

    cout << q.first() << " - " << q.last() << endl;


    try {
        for (int i = 0; i < 20; ++i)
            cout << q.pop() << ' ';
        cout << endl;
    } catch (exception &err) {
        cout << endl << err.what() << endl;
    }


    q.printInfo();

    return 0;
}
