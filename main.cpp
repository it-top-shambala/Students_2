#include <iostream>

#include "StudentsDb.h"
#include "ConsoleHelper.h"

using namespace std;

int main() {
    StudentsDb db;
    db.Init();
    PrintStudents(db.ToVector());

    db.Delete(3);
    PrintStudents(db.ToVector());

    Student student;
    student.Init("AA", "A");
    db.Add(student);
    PrintStudents(db.ToVector());

    return 0;
}
