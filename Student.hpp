#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
    string* name;
    int* age;

    public:
    Student(); // constructor 
    ~Student(); // destructor

    // setters
    void setName(string);
    void setAge(int);

    // getters
    string getName() const;
    int getAge() const;
};

#endif