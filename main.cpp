#include <iostream>

#include "StudentsDb.h"
#include "ConsoleHelper.h"

using namespace std;

int main() {
    StudentsDb db;
    db.Init();

    PrintStudents(db.ToVector());

    return 0;
}
