#ifndef MYEXCEPTION_HPP
#define MYEXCEPTION_HPP

#include <string>

class MyException {
    private:
    std::string description_ {"[Exception::Generic] Generic Error"};

    public:
    MyException(void) {}

    MyException(const std::string& desciption) {
        this->description_ = desciption;
    }
    
    const std::string what(void) const {
        return this->description_;
    }

};


#endif