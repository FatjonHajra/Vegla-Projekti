#include <iostream>
using namespace std;


struct Ndeshje {
    string ekipi1;
    string ekipi2;
    string data;
    string stadiumi;
    string gjyqtari;
};


void regjistroNdeshjen(Ndeshje &nd) {
    cout << "Shkruani emrin e ekipit te pare: ";
    cin >> nd.ekipi1;
    cout << "Shkruani emrin e ekipit te dyte: ";
    cin >> nd.ekipi2;
    cout << "Shkruani daten e ndeshjes (dd/mm/yyyy): ";
    cin >> nd.data;
    cout << "Shkruani emrin e stadiumit: ";
    cin >> nd.stadiumi;
    cout << "Shkruani emrin e gjyqtarit: ";
    cin >> nd.gjyqtari;
}


void shfaqNdeshjen(const Ndeshje &nd) {
    cout << "\n--- Informacioni i Ndeshjes ---\n";
    cout << "Ekipi 1: " << nd.ekipi1 << endl;
    cout << "Ekipi 2: " << nd.ekipi2 << endl;
    cout << "Data: " << nd.data << endl;
    cout << "Stadiumi: " << nd.stadiumi << endl;
    cout << "Gjyqtari: " << nd.gjyqtari << endl;
}

int main() {
    Ndeshje ndeshja;
    
    cout << "Regjistroni nje ndeshje futbolli:\n";
    regjistroNdeshjen(ndeshja);

    shfaqNdeshjen(ndeshja);

    return 0;
}