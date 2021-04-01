#ifndef DATA_H
#define DATA_H
#include <iostream>

using namespace std;

class Data
{
private:
    // Variaveis membro
    char dia, mes;
    short ano;
    short aMin = 0, aMax = 9999;
    bool bOk;
public:
    // Construtor - inline
    //  Data() = default;
    Data(){}

    // Construtora com parâmetros(não é inline)
    Data(short ami, short ama);

    //Data() : dia(13), mes(5), ano(1994), bOk(true){ }
    void alteraData(char d, char m, short a);
    void imprimeData() const;
    bool anoBissexto() const;
};
#endif // DATA_H
