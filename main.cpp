#include "Date.h"
#include "DateManager.h"

using namespace std;

int main()
{
    Date dateFromFile;
    DateManager dateManager;
    dateFromFile.getDateFromXMLFile("incomes.xml");

    Date today;
    today.getCurrentDate();

    Date newDate(5, 2, 2018);

    cout << "Dzisiejsza data: ";
    today.showDate();
    cout  << endl;
    cout<<"Liczba dni w miesiacu: " << dateManager.getNumberOfDaysInMonth(today.getMonth(), today.getYear());
    cout  << endl << endl;
    cout << "Data z pliku: ";
    dateFromFile.showDate();
    cout  << endl;
    cout<<"Liczba dni w miesiacu: " << dateManager.getNumberOfDaysInMonth(dateFromFile.getMonth(), dateFromFile.getYear());
    cout  << endl << endl;
    cout << "Data wprowadzona w kodzie: ";
    newDate.showDate();
    cout  << endl;
    cout<<"Liczba dni w miesiacu: " << dateManager.getNumberOfDaysInMonth(newDate.getMonth(), newDate.getYear());
    cout  << endl << endl;
    dateManager.compareDates(dateFromFile, newDate);
    cout  << endl;

    return 0;
}
