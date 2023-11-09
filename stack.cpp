#include <stack>
#include <string>
#include <iostream>
using namespace std;

void push(stack<string>& cities, string currentCity){
    cities.push(currentCity);
}


void check(stack<string> cities){
  if(cities.empty()){
    cout << "Empty Stack" << endl;
  }else{
    while(!cities.empty()){
       printf(" %s -> ", cities.top().c_str());
      cities.pop();
    }
    printf("\n");
    //cout << cities.top() << endl;
  }
   

}
void printGps(stack<string> cities) {
    stack<string> tempStack;

    while (!cities.empty()) {
        tempStack.push(cities.top());
        cities.pop();
    }

    while (!tempStack.empty()) {
        printf("%s ", tempStack.top().c_str());
        tempStack.pop();
        if(!tempStack.empty()){
            printf("-> ");
        }else
        if(tempStack.empty()){
            printf("\n");
        }
    }
}

int leaveTown(stack<string>& cities){
    if(cities.empty()){
        cout << "All cities were visited!" << endl;
        exit(0);
    }else{
        printf("%s", cities.top().c_str());
        cities.pop();
        if(cities.empty()){
            printf("\n");
        }else
        if(!cities.empty()){
            printf("-> %s\n", cities.top().c_str());
        }
    }
    return 0;
}
void setDestiny(stack<string>& cities){
    string path;
    cout << "Path (! to finish setting path) " << endl;
    while(path != "!"){
        cout << "Add town: ";
        cin >> path;
        if(path != "f"){
            push(cities,path);
        }
    }
}

