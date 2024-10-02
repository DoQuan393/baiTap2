#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("BAI1.INP");
    ofstream outputFile("BAI1.OUT");

    string A, B;
    getline(inputFile, A);
    getline(inputFile, B);

    string numberA = "";
    string numberB = "";
    
    for (int i = 0; i < A.length(); ++i) {
        if (isdigit(A[i])) {
            numberA += A[i];
        }
    }
    
    for (int i = 0; i < B.length(); ++i) {
        if (isdigit(B[i])) {
            numberB += B[i];
        }
    }

    long long numA = 0;
    for (int i = 0; i < numberA.length(); ++i) {
        numA = numA * 10 + (numberA[i] - '0');
    }

    long long numB = 0;
    for (int i = 0; i < numberB.length(); ++i) {
        numB = numB * 10 + (numberB[i] - '0');
    }

    long long tong = numA + numB;

    outputFile << numberA << endl;
    outputFile << numberB << endl;
    outputFile << tong << endl;

    inputFile.close();
    outputFile.close();
    return 0;
}

