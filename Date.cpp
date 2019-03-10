#include "Date.h"

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::getDateFromXMLFile(string fileName) {
    CMarkup xmlFile;
    xmlFile.Load(MCD_T(fileName));
    xmlFile.FindElem();
    xmlFile.IntoElem();
    xmlFile.FindElem(MCD_T("amount"));
    string amount = xmlFile.GetData();
    xmlFile.FindElem();
    xmlFile.IntoElem();
    xmlFile.FindElem(MCD_T("day"));
    day = atoi(xmlFile.GetData().c_str());
    xmlFile.FindElem(MCD_T("month"));
    month = atoi(xmlFile.GetData().c_str());
    xmlFile.FindElem(MCD_T("year"));
    year = atoi(xmlFile.GetData().c_str());
}

int Date::getDay() {
    return day;
}

void Date::setDay(int newDay) {
    day = newDay;
}

int Date::getMonth() {
    return month;
}

void Date::setMonth(int newMonth) {
    month = newMonth;
}

int Date::getYear() {
    return year;
}

void Date::setYear(int newYear) {
    year = newYear;
}

void Date::showDate() {
    cout<< day << "-" << month << "-" << year;
}

void Date::getCurrentDate() {

    int currentDay;
    int currentMonth;
    int currentYear;

    time_t t = time(NULL);
    tm* timePtr = localtime(&t);

    currentDay = timePtr->tm_mday;
    currentMonth = timePtr->tm_mon+1;
    currentYear = timePtr->tm_year+1900;

    setDay(currentDay);
    setMonth(currentMonth);
    setYear(currentYear);
}


