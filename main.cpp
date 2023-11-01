/*Exercises (Stacks): "Manel's GPS"
There is a set of roads connecting various cities. A traveling salesman named Manel travels through the cities selling various products (for immediate delivery and "on sight") to the merchants of each visited city.
 In addition, Manel is afraid of being robbed on the road and having the payment received from the merchants taken away.
Taking advantage of this characteristic of Manel and the fact that he always returns from his trips by the reverse route to the outward journey, the merchants proposed an agreement:
 Manel receives payment for the goods delivered to the merchants when he is returning from the trip ("on sight"), which is also an advantage for the merchants who have time to sell 
 some merchandise and gather money for payment.
Although this scheme has been successful, Manel has  a memory problem and forgotten the way back (the cities he passed through).
 Given this problem, Manel hired you to create a System that will be installed on Manel's laptop and will work as follows:
1- on the way out, when Manel is leaving a city, he must indicate which is the city of origin and which will be the next city visited;
2- on the way back, when Manel is leaving each city, he must consult the system to know which is the destination city (origin and destination are reversed from item 1);
2.1- still on the way back, Manel can decide to visit customers in cities close to the main route; if this happens, he must return (as already established) to the last city visited; 
Example: assuming that he passed through cities A, B, C, D and E (which make up the main route),
 and that he is returning and has already passed through cities E and D. If he decides to visit nearby cities F, G and H, he must return by the reverse route and pass through H, G, F, D, C, B and A;
3. The simulation of the dynamics of leaving for a city (items 1 and 2.1) or returning to the previous city (item 2) will be defined by options in a menu;
4. The simulation ends when Manel is back at his origin (empty stack).*/

#include <iostream>
#include <stack>
using namespace std;



void pushStack(stack<string>& cities, string citie){
    cities.push(citie);
    
}
void checkStack(stack<string>& cities){
  if(cities.empty()){
    cout << "Empty stack" << endl;
  }else{
    cout << cities.top() << endl;
  }
   

}
int leaveTown(stack<string>& cities){
    if(cities.empty()){
        cout << "Empty stack" << endl;
        return 0;
    }else{
        cout << "Leaving " << cities.top() << endl;
        cities.pop();
        if(!cities.empty())
            cout << "to " << cities.top() << endl;
        
    }
    return 0;
}
//fix this function next =D
void setDestination(stack<string>& cities){
    string path;
    cout << "Path: ";
    while(path != "f"){
        if(path != "f"){
            cin >> path;
            pushStack(cities,path);
        }
        break;
    }

}


void menu(stack<string>& cities){
    int option = 0;
    cout << "1 - Define origin and destination" << endl; //he must choose the origin and the destination before leaving city 1 -> city 2 -> city 3 -> city 4 -> city 5...
    cout << "2- Leave current town" << endl;//it must show the path in the reversed order
    cout << "3- Return to the previous city" << endl; // city 5 -> city 4 -> city 3 -> city 2 -> city 1
    cout << "4- Consult System" << endl;
    cout << "5- Visit Customers" << endl;

    cin >> option;

    switch(option){
        case 1:
            setDestination(cities);
            break;
        case 2:
            leaveTown(cities);
            break;
        case 4:
            checkStack(cities);
            break;
        default:
            cout << "Invalid option" << endl;
            break;

    }
    
}
int main(){
    stack<string> cities;
    while(1)
        menu(cities);

    return 0;
}