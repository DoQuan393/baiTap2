#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int a) {
    if (a <= 1) return false;
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0) return false;
    }
    return true;
}

int main() {
    ifstream inputFile("BAI2.INP");
    ofstream outputFile("BAI2.OUT");
	
    int a;
    inputFile >> a;

    if (isPrime(a)) {
        outputFile << a << " la so nguyen to" << endl;
    } else {
        outputFile << "khong la so nguyen to";

        int count = 0;
        int sum = 0;
        
        for (int i = 1; i <= a; ++i) {
            if (a % i == 0) {
                count++;
                sum += i;
            }
        }

        outputFile << endl << count << endl << sum << endl;
    }

    inputFile.close();
    outputFile.close();
    return 0;
}

