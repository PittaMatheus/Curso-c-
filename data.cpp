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

    bOk = m >= 1 && m <= 12 &&
            a >= aMin && a <= aMax &&
            d >= 1 && d <= ultimoDiaMes();
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
    if(!bOk) return false;
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

char Data::ultimoDiaMes() const
{
    if(mes == 2)
        return 28 + anoBissexto();
    if(mes <= 7){
        return 30 + (mes & 1); // se o mes par, operacao binaria da 0
    }
    return 31 - (mes & 1);  // se o mes impar, operacao binaria da 1

}

// Compara() - 2 datas
// < 0   - Primeira data menor que a segunda
// > 0   - Primeira data maior que a segunda
// = 0   - Primeira data igual a segunda
int Data::compara(const Data &dt) const
{
    if(this->ano != dt.ano){
        return ano -dt.ano;
    }
    if(this->mes != dt.mes){
        return mes -dt.mes;
    }

    return this->dia -dt.dia;
}










