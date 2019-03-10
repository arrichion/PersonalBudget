#include "DateManager.h"
#include "Date.h"

int DateManager::getNumberOfDaysInMonth(int month, int year) {
    if( month == 2) {
        if((year%400==0) || (year%4==0 && year%100!=0))
            return 29;
        else
            return 28;
    } else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8
              ||month == 10 || month==12)
        return 31;
    else
        return 30;
}

void DateManager::compareDates (Date date1, Date date2) {
    if (date1.getYear() > date2.getYear()) {
        cout << "Pozniejsza data to ";
        date1.showDate();
        return;
    }

    else if (date1.getYear() < date2.getYear()) {
        cout << "Pozniejsza data to ";
        date2.showDate();
        return;
    }

    else {
        if (date1.getMonth() > date2.getMonth()) {
            cout << "Pozniejsza data to ";
            date1.showDate();
            return;
        }

        else if (date1.getMonth() < date2.getMonth()) {
            cout << "Pozniejsza data to ";
            date2.showDate();
            return;
        }

        else {
            if (date1.getDay() > date2.getDay()) {
            cout << "Pozniejsza data to ";
            date1.showDate();
            return;
            }

            else if (date1.getDay() < date2.getDay()) {
                cout << "Pozniejsza data to ";
                date2.showDate();
                return;
            }

            else {
                cout << "Daty sa takie same";
                return;
            }
        }
    }
}


