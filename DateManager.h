#ifndef DATEMANAGER_H
#define DATEMANAGER_H

#include <iostream>
#include <string>
#include <ctime>
#include "Markup.h"
#include "Date.h"

using namespace std;

class DateManager {

public:
    int getNumberOfDaysInMonth(int month, int year);
    void compareDates (Date date1, Date date2);
};

#endif
