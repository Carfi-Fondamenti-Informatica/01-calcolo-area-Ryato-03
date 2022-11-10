#include <iostream>
using namespace std;

int main(){
    //Qui vanno definite le variabili
    float a, b, c;
    cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
    float AreaTriangolo = (a * b) / 2;
    float AreaQuadrato = a * a;
    float AreaRettangolo = a * b;
    float  AreaTrapezio = ((a + a) * c) / 2;
    cout << (a * b) / 2 << endl;
    cout << a * a << endl;
    cout << a * b << endl;
    cout << ((a + a) * c) / 2 << endl;
    return 0;
}
