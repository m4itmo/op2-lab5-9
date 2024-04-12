#ifndef OP2_LAB5_9_QUEUE_H
#define OP2_LAB5_9_QUEUE_H


template<class T>
class queue {
private:
    T *arr;
    int head; // first
    int tail;
    int size;
    int used;
public:
    explicit queue(int size);

    ~queue();

    void push(T it);

    T pop();

    T first();

    T last();

    void printInfo();
};


#include "queue.tpp"

#endif //OP2_LAB5_9_QUEUE_H
