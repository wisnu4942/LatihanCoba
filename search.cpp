#include <iostream>
using namespace std;

int main(){
    
    int array[5]={5,6,30,54,77}, search, i, num;

    cout << "Input Data Array :" << endl; 
    for(i = 0; i < 5; i++){ // Menginputkan Data Array
        cout << "Data " << i+1 << ". "; 
        cin >> array[i];
    }

    system("cls"); // Agar tampilan lebih rapi, tidak menunjukan data 2x
    cout << "Data Array :" << endl;
    for(i = 0; i < 5; i++){
        cout << "Data " << i+1 << ". " << array[i] << endl;
    }
    cout << endl;

    cout << "Input angka yang akan dicari: ";
    cin >> num;
    
    for(i = 0; i < 5; i++){
        if(array[i] == num){
        cout << "Angka ditemukan pada data ke-" << i+1;
        break;
        }
    }
    
    if(i == 5){ 
        cout  << "Angka tidak ditemukan";
    }
    
    cout << endl << endl;


    return 0;
}
