#include <iostream>
using namespace std;

int main(){
    int idade, anos, meses, dias;

    cin >> idade;

    anos = idade / 365;
    idade = idade - (anos*365);
    meses = idade /30;
    idade = idade - (meses*30);

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << idade << " dia(s)" << endl;
}