#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ifstream inp("BAI3.INP");
	ofstream out("BAI3.OUT")
    string n;
    inp>>n;
    
    int so_chu_so = n.length();
    int tong_cac_chu_so = 0;

    for (int i = 0; i < so_chu_so; i++) {
        tong_cac_chu_so += n[i] - '0';
    }

    char chu_so_lap_nhat = n[0];
    for (int i = 1; i < so_chu_so; i++) {
        if (n[i] > chu_so_lap_nhat) {
            chu_so_lap_nhat = n[i];
        }
    }

    out<<so_chu_so<<endl;
    out<<tong_cac_chu_so<<endl;
    out<<chu_so_lap_nhat<<endl;

    return 0;
}
