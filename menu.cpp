#include <iostream>
#include <stack>
#include "cities.h"
#include <cstdlib>
using namespace std;



void menu(stack<string>& cidades){
    int opcao = 0;
    string caminho;
    cout << "1- Caminho" << endl; 
    cout << "2- Deixar cidade (ordem: ultima cidade ate a 1a cidade)" << endl; 
    cout << "3- Checar GPS (ordem: 1a cidade ate a N cidade)" << endl;
    cout << "4- Visitar Clientes (definir caminho de visita de clientes)" << endl;

    cin >> opcao;

    switch(opcao){
        case 1:
            while(caminho != "f"){
                cin >> caminho;
                if(caminho != "f"){
                    push(cidades,caminho);
                    
                }
            }
            break;
        case 2:
            if(!cidades.top().empty()){
                printf("Saindo de: %s\n", cidades.top().c_str());
                pop(cidades);
                if(cidades.empty()){
                    cout << "Nao tem cidade atual" << endl;
                    exit(0);
                }else
                    printf("Chegando em: %s\n", cidades.top().c_str());
                }    
            break;
        case 3:
            cout << "Checando GPS (Da primeira cidade ate a ultima)" << endl;
            printGps(cidades);
            break;
        case 4:
            
            if(cidades.empty()){
                cout << "Nao tem caminho definido" << endl;
            }else if(!cidades.empty()){
                cout << "Caminho de visita de clientes: " << endl;
                while(caminho != "f"){
                    cin >> caminho;
                    if(caminho != "f"){
                        push(cidades,caminho);
                    
                    }
                }
            }
            
            break;
        default:
            cout << "Opcao invalida" << endl;
            break;

    }
    
}