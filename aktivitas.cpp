#include <iostream>
#include <string>
using namespace std;

int main() {
    string aktivitas;
    string tempat;
    
    cout << "=================================\n";
    cout << "      PROGRAM AKTIVITAS SAYA     \n";
    cout << "=================================\n\n";
    
    cout << "Apa aktivitas anda? : ";
    getline(cin, aktivitas);
    
    cout << "Di mana anda " << aktivitas << "? : ";
    getline(cin, tempat);
    
    cout << "\nOutput:\n";
    cout << "Saya sedang " << aktivitas << " di " << tempat << endl;
    
    return 0;
} 