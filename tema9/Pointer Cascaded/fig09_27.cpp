#include <iostream>
#include "Time.h"
using name std;

int main() {
    Time t;

    t.setHour(18).setMinute(30).setSecond(22);

    cout << "Universal time: " << t.toUniversalString()
        << "\nStandard time: " << t.toStandardString();

    cout << "\n\nNew standard time: " 
        << t.setTime(20, 20, 20).toStandardString() << endl;
}