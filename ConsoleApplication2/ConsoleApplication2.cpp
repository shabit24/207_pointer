#include <iostream>
using namespace std;

class mahasiswa {

public:
	int nim;
	void showNim(); //deklarasi method


};

void mahasiswa::showNim() {
	cout << "No Induk = " << nim << endl;
}

int main() {
	mahasiswa  mhs{ 1 }; //object mahasiswa
	mhs.showNim(); //Member access operator
      
	mahasiswa& ref = mhs; // pointer reference refMhs
	ref.nim = 2; //member access operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; // pointer dereference
}