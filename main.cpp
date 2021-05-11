#include <iostream>
using namespace std;

struct date {
  int year;
  int month;
  int day;
} bob;



int main() {
  date *bob;
  date halloween = {2021,10,31};

  cout << "halloween is on " << halloween.month << "/" << halloween.day <<"/"<<halloween.year << endl;

  bob = &halloween;

  return 0;
}