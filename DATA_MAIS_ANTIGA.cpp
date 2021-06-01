#include <iostream>

using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};
    //retorna 1 se pessoa1 mais velha
    //retorna -1 se a pessoa2 mais velha
    int data_maior(Data d1, Data d2){
        if(d1.ano == d2.ano && d1.mes == d2.mes && d1.dia == d2.dia) return 0;
        else if(d1.ano > d2.ano) return -1; 
        else if(d1.ano < d2.ano) return 1;
        else if(d1.mes > d2.mes) return -1;
        else if(d1.mes < d2.mes) return 1;
        else if(d1.dia > d2.dia) return -1;
        else return 1;
    }   


int main(){
    Data d1, d2;
    char pes1[20], pes2[20];
    cout << "\n*ESTE CODIGO COMPARA DUAS DATAS DE NASCIMENTO E \n";
    cout << "    DIZ QUAL EH A PESSOA COM MAIOR IDADE*" << endl << endl;

    cout << "PESSOA 1:\n";
    cout << "nome da pessoa 1: ";
    cin >> pes1;
    cout << "dia: ";
        while(d1.dia<1 || d1.dia>31){ cin >> d1.dia; 
            if(d1.dia<1 || d1.dia>31) cout <<"valor invalido \ndia: ";} //condiciona o dia estar entre os valores 1 e 31
    cout << "mes: ";
        while(d1.mes<1 || d1.mes>12){ cin >> d1.mes; 
            if(d1.mes<1 || d1.mes>12) cout <<"valor invalido \nmes: ";} //condiciona o mes estar entre os valores 1 e 12
    cout << "ano: ";
    cin >> d1.ano;

    cout << "\nPESSOA 2:\n";
    cout << "nome da pessoa 2: ";
    cin >> pes2;
    cout << "dia: ";
        while(d2.dia<1 || d2.dia>31){ cin >> d2.dia; 
            if(d2.dia<1 || d2.dia>31) cout <<"valor invalido \ndia: ";} //condiciona o dia estar entre os valores 1 e 31
    cout << "mes: ";
        while(d2.mes<1 || d2.mes>12){ cin >> d2.mes; 
            if(d2.mes<1 || d2.mes>12) cout <<"valor invalido \nmes: ";} //condiciona o mes estar entre os valores 1 e 12
    cout << "ano: ";
    cin >> d2.ano;

    cout << "\nRESULTADO:\n";

    // para transformar o retorno da função na pessoa mais velha
    int maior = data_maior(d1, d2);
    if(maior == 0){
        cout << pes1 << " e " << pes2 << " são da mesma idade.";
    }
    else if (maior == 1){
        cout << pes1 << " eh mais velho(a) que " << pes2;
    } else if (maior == -1){
        cout << pes2 << " eh mais velho(a) que " << pes1;
    }
    
    return 0;
}