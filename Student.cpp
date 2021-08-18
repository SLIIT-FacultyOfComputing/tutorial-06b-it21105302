#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int id,const char sname[]) {
  strcpy(name,sname);
  studentId=id;
}

// Display StudentId and Name
void Student::display() {
  cout << name << "'s Student ID is : " << studentId << endl;
}
