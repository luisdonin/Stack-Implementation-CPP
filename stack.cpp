#include <stack>
#include <string>
#include <iostream>
using namespace std;

void push(stack<string>& cidades, string cidadeAtual){
    cidades.push(cidadeAtual);
}

void printGps(stack<string> cidades) {
    stack<string> pilhaTemp;

    while (!cidades.empty()) {
        pilhaTemp.push(cidades.top());
        cidades.pop();
    }

    while (!pilhaTemp.empty()) {
        printf("%s ", pilhaTemp.top().c_str());
        pilhaTemp.pop();
        if(!pilhaTemp.empty()){
            printf("-> ");
        }else
        if(pilhaTemp.empty()){
            printf("\n");
        }
    }
}

int pop(stack<string>& cidades){
   
    cidades.pop(); 
   
    return 0;
}

