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

    const int result = dt.compara(dt1);
    if(result == 0){
        cout << "Dt e dt1 são iguais\n";
    }else if(result < 0){
        cout <<" dt e menor que dt1\n";
    }
    else
        cout << "dt e maior que dt1 \n";

    //if (dt.operator==(dt1))

    if(dt == dt1){
        cout << "Dt e dt1 são iguais\n";
    }else if(dt < dt1){
        cout <<" dt e menor que dt1\n";
    }else{
        cout << "dt e maior que dt1 \n";
    }















    return 0;
}
