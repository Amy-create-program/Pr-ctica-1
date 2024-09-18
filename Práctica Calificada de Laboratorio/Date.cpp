#include <iostream>

class Date {
    
public:
    Date(int Month, int Year, int Day) 
        : month(Month), year(Year), day(Day) {}

    void setMonth(int getMonth)
        if (getMonth >= 1 && getMonth <= 12) 
        {
            month = getMonth;
        }
        else 
        {
            cout << "El mes que ingreso no es valido" << endl;
        }

    void setDay(int getDay)
        if (getDay >= 1 && getDay <= 31) 
        {
            day = getday;
        }

    void setYear(int getYear)
    {
        year = getYear;
    }

    void displayDate(){
        cout << month << "/" << day << "/" << year;
    }
private:    
    int year;
    int month;
    int day;

};

inr main(){
    Date date1(5, 12 , 2022);
    std::cout << "Fecha 1: ";
    date1.displayDate();

    date date2(2, 25, 2025);
    std::cout << "Fecha 2: ";
    date2.displayDate();

    return 0;
}
