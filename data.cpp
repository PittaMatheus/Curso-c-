#include <iostream>
#include <iomanip>
#include "data.h"

using namespace std;


Data::Data(short ami, short ama){
    this->aMin = ami;
    this->aMax = ama;
    bOk = false;
}


void Data::alteraData(char d, char m, short a)
{
    this->dia = d;
    mes = m;
    ano = a;

    bOk = d >= 1 && d <= 31 && m >= 1 && m <= 12 && a >= aMin && a <= aMax;
}

void Data::imprimeData() const
{
    char ch = cout.fill('0');
    if(this->bOk){
        cout << setw(2) << (int) dia << '/' << setw(2) << (int) mes << '/' << ano << endl;
        cout.fill(ch);
    }
    else
    {
        cout << "00/00/0000" << endl;
    }
}

bool Data::anoBissexto() const
{
    return (ano % 4 == 0 && ano % 100 != 0) ||
            ano % 400 ==0;
    /*
    if( ano % 4 == 0 && ano % 100 != 0){
        return true;
    }
    if( ano % 400 == 0){
        return true;
    }
    return false;
    */
}
