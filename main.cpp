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

    dt.alteraData(1, 2, 2020);
    cout << "dt: ";
    dt.imprimeData();

    dt1.alteraData(15,2,1690);
    cout << "dt1: ";
    dt1.imprimeData();

    if(dt.anoBissexto()){
        cout << "Ano de dt e bissexto\n";
    }
    if(dt1.anoBissexto()){
        cout << "Ano de dt1 e bisexxto\n";
    }

    cout << "Dt tem " << (int) dt.ultimoDiaMes() << " dias \n";
    cout << "Dt1 tem " << (int) dt1.ultimoDiaMes() << " dias \n";
    return 0;
}
