#ifndef STUDENTS_STUDENT_H
#define STUDENTS_STUDENT_H

#include <string>
#include <vector>

#include "Subject.h"

using namespace std;

struct Student {
    int id;
    string first_name;
    string last_name;
    vector<Subject> subjects;

    void Init(string last_name, string first_name) {
        this->last_name = last_name;
        this->first_name = first_name;
    }
};

#endif //STUDENTS_STUDENT_H
