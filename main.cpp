#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
    int a, b, c;
    cout << "Inserire i dati per completare l'operazione:" << endl;
    cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
    float AreaTriangolo = (a * b) / 2;
    float AreaQuadrato = a * a;
    float AreaRettangolo = a * b;
    float  AreaTrapezio = ((a + b) * c) / 2;
    cout << "Area Triangolo = " << AreaTriangolo << endl << "Area Quadrato = " << AreaQuadrato << endl;
    cout << "Area Rettangolo = " << AreaRettangolo << endl  << "Area Trapezio = " << AreaTrapezio << endl;
    return 0;
}
