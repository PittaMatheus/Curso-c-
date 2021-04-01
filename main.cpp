/*
Módulo: prog1.cpp
Desenvolvido por: Matheus
Data: 23/02/2021
*/


#include <iostream>
#include <vector>
#include "data.h"


using namespace std;


int main()
{
    Data dt(2020, 2021);
    Data dt1;

    dt.alteraData(1, 6, 2020);
    cout << "dt: ";
    dt.imprimeData();

    dt1.alteraData(15,10,1690);
    cout << "dt1: ";
    dt1.imprimeData();

    if(dt.anoBissexto()){
        cout << "Ano de dt e bissexto\n";
    }
    if(dt1.anoBissexto()){
        cout << "Ano de dt1 e bisexxto\n";
    }
    return 0;
}
