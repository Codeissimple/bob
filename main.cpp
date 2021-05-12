#include <iostream>
using namespace std;

struct date {
  int year;
  int month;
  int day;
} bob;

date *new_date();
void print_date_by_reference(date*);
void print_date_by_value(date);


int main() {
  date *bob;
  date *newDate;
  date halloween = {2021,10,31};

  cout << "halloween is on " << halloween.month << "/" << halloween.day <<"/"<<halloween.year << endl;

  bob = &halloween;

  cout << "halloween is on " << bob->month << "/" << bob->day <<"/"<<bob->year << endl;


  print_date_by_reference(bob);

  print_date_by_value(halloween);

  newDate = new_date();
  print_date_by_reference(newDate);

  return 0;
}

void print_date_by_reference(date* pointer){
  cout << "halloween is on " << pointer->month << "/" << pointer->day << "/" <<pointer->year << endl; 
}

void print_date_by_value(date aDate){
  cout << "halloween is on " << aDate.month << "/" << aDate.day << "/" <<aDate.year << endl; 
}

date *new_date(){
  date *aNewDate;

  aNewDate = new date;

  aNewDate->year = 0;
  aNewDate->month = 0;
  aNewDate->day = 0;

  return aNewDate;
}