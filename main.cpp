#include <iostream>
#include <stack>
#include "cities.h"
#include <cstdlib>
using namespace std;



void menu(stack<string>& cities){
    int option = 0;
    cout << "1- Path" << endl; 
    cout << "2- Leave Town" << endl; 
    cout << "3- Check GPS" << endl;
    cout << "4- Visit Customers" << endl;

    cin >> option;

    switch(option){
        case 1:
            setDestiny(cities);
            break;
        case 2:
            //check(cities);
            cout << "Leaving Town: (from current town to previous town)" << endl;
            leaveTown(cities);
            break;
        case 3:
            cout << "Checking from origin to destination" << endl;
            printGps(cities);
            break;
        case 4:
            cout << "Set client path: " << endl;
            if(cities.empty()){
                cout << "First set a path!" << endl;
            }else
            setDestiny(cities);
            break;
        default:
            cout << "Invalid" << endl;
            break;

    }
    
}
int main(){
    stack<string> cities;
    while(1)
        menu(cities);

    return 0;
}