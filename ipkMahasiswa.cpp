#include <iostream>
using namespace std;

int main(){
    int i,jml;
    double total=0,sum,Nilai_makul[10];
    string Nama,NIM,invalid = "IPK Tidak Valid";
    
    cout << "====================" << endl;
    cout << "Input Data Mahasiswa" << endl;
    cout << "====================\n" << endl;

    cout << "Masukan NIM\t\t: "; getline(cin, NIM);
    cout << "Masukan Nama Mahasiswa\t: "; getline(cin, Nama);
    cout << "Jumlah Mata Kuliah\t: ";
    cin >> jml;
    cout << endl;

    for(i=0;i<jml;i++){
        cout << "Masukan Nilai Mata Kuliah " << i+1 << " : ";
        cin >> Nilai_makul[i];
        total = total + Nilai_makul[i];
    }
    sum = total / jml;

    system("cls");
    cout << "\n==============" << endl;
    cout << "Data Mahasiswa" << endl;
    cout << "==============\n" << endl;

    cout << "NIM\t: " << NIM << endl;
    cout << "Nama\t: " << Nama << endl;
    cout << "Nilai\t: ";
    for(i=0;i<jml;i++){
        cout << i+1 << "." << Nilai_makul[i] << " "; 
    }
    cout << endl;
    
    if (jml <= 1){
        cout << "IPK\t: " << invalid << endl;
    } else
        cout << "IPK\t: " << sum << endl;

	return 0;
}
