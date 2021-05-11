#include <iostream>
using namespace std;

struct date {
  int year;
  int month;
  int day;
} bob;
void print_date(date* pointer);


int main() {
  date *bob;
  date halloween = {2021,10,31};

  cout << "halloween is on " << halloween.month << "/" << halloween.day <<"/"<<halloween.year << endl;

  bob = &halloween;

  cout << "halloween is on " << bob->month << "/" << bob->day <<"/"<<bob->year << endl;


  print_date(bob);


  return 0;
}

void print_date(date* pointer){
  cout << "halloween is on " << pointer->month << "/" << pointer->day << "/" <<pointer->year << endl; 
}