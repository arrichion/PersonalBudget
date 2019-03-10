#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <ctime>
#include "Markup.h"

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int day=1, int month=1, int year=1900);
    void getDateFromXMLFile(string fileName);
    int getDay();
    void setDay(int newDay);
    int getMonth();
    void setMonth(int newMonth);
    int getYear();
    void setYear(int newYear);
    void showDate();
    int getNumberOfDaysInMonth(int month, int year);
    void compareDates (Date date1, Date date2);
    void getCurrentDate();
};

#endif
