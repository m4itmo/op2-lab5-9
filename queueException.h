#ifndef OP2_LAB5_9_QUEUEEXCEPTION_H
#define OP2_LAB5_9_QUEUEEXCEPTION_H

#include <exception>
#include <string>

class queueException : public std::exception {
private:
    std::string msg;
public:
    explicit queueException(const char *message) {
        msg = message;
    }

    const char *what() const noexcept override {
        return msg.c_str();
    }
};

#endif //OP2_LAB5_9_QUEUEEXCEPTION_H
