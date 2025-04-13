#include <iostream>
#include "CreateAndDestroy.h" //include CreateAndDestroy class definition
using namespace std;

void create(); //prototype
CreateAndDestroy first{1, "(global before main)"}; //global object

int main(){
    cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroy second{2, "(local in main)"}; 
    static CreateAndDestroy third{3, "(local staticc in main)"};

    create(); //call function to create objects

    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
    CreateAndDestroy fouth{4, "(local in main)"};
    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
}

//function to create objects
void create() {
    cout << "\nCREATE FUNCTION: EXECUTION BEGINS" <<  endl;
    CreateAndDestroy fifth {5, "(local in create)"};
    static CreateAndDestroy sixth{6, "(local static in create)"};
    CreateAndDestroy seventh{7, "(local in create)"};
    cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
}