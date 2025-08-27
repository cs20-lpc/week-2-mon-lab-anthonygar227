#include "Student.hpp"

Student::Student()
: name(new string("")), age(new int(0)) {
    cout << "Student object created!" << endl;
}

Student::~Student() {
    cout << "Student object destroyed!" << endl;
    delete name;
    delete age;
}

void Student::setName(string s) {
    *name = s;
}

void Student::setAge(int i) {
    *age = i;
}

string Student::getName() const{
    return *name;
}

int Student::getAge() const {
    return *age;
}