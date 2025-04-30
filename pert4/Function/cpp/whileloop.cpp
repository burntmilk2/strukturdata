#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 0;
    int z = 0;

    cout << "Masukkan nilai y: ";
    cin >> y; 

    while (x < 9) {
        x = x + 2  ;
        y = x * 3 + 2 ;
        z = y  + 2; 
          
        cout << "NIlai x: " << x << ", Nilai y: " << y << ", Nilai z: " << z << endl;
    }

    return 0;
}