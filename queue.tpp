#include "queue.h"
#include "queueException.h"

template<class T>
queue<T>::queue(int size) : size(size) {
    arr = new T[size];
    head = used = 0;
    tail = -1;
}

template<class T>
queue<T>::~queue() {
    delete arr;
}

template<class T>
void queue<T>::push(T it) {
    if (used == size)
        throw queueException("queue overflow");

    ++used;
    tail = (tail + 1) % size;

    arr[tail] = it;
}

template<class T>
T queue<T>::pop() {
    if (!used)
        throw queueException("queue has no elements");

    T tmp = arr[head];

    --used;
    head = (head + 1) % size;

    return tmp;
}

template<class T>
T queue<T>::last() {
    if (!used)
        throw queueException("queue has no elements");

    return arr[tail];
}

template<class T>
T queue<T>::first() {
    if (!used)
        throw queueException("queue has no elements");

    return arr[head];
}

template<class T>
void queue<T>::printInfo() {
    std::cout << "   info" << std::endl;
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << ' ';
    std::cout << std::endl << head << " - " << tail << " : " << used << "/" << size << std::endl << "  /info"
              << std::endl;
}
