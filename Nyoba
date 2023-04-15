#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    string id,pass,email,login,newpass,newpass2;
    int pilih;  
    char a;  

    menu:
    cout << "Please select the following menu: " << endl;
    cout << "1. Login" << endl;
    cout << "2. Sign Up" << endl;
    cout << "3. Exit" << endl;
    cout << "type: ";
    cin >> pilih;
    system("cls");
    goto satu;

    menu2:
    cout << "What's up?" << endl;
    cout << "Would you go to first page? (y/n)";
    cin >> login;

    if (login == "y" ){
        system("cls");
        goto menu;
    }else if (login == "n" ){
        goto dua;
    }else {
        cout << "System error" << endl;
        goto menu2;
    }

    satu:
    switch(pilih){
    case 1:  
        log: 
        cout << "Welcome to Facebook! " << endl;
        cout << "ID \t\t= ";
        cin >> id;
        cout << "Password \t= ";
        cin >> pass;
        
        if ( (id == "wisnu" ) && ( pass == "oekxr" )){
            cout << endl;
            cout << "Login Berhasil!" << endl;
            system("pause");
            system("cls");
            goto menu2;
        } else {
            cin.ignore();
            cout << endl;
            cout << "ID atau Password salah, silahkan coba lagi." << endl;
            system("pause");
            system("cls");
            goto menu;
        }
    case 2:
        sign:
        cout << "Sign up!" << endl;
        cout << "Input your email \t= ";
        cin >> email;
        cout << "Input your password \t= ";
        cin >> newpass;
        cout << "Confirm your password \t= ";
        cin >> newpass2;

        if ((email == "wisnu") && ((newpass == "oekxr") && (newpass2 == "oekxr"))){
            cout << endl;
            cout << "Sign up succesfull, please login" << endl;
            system("pause");
            system("cls");
            goto log;
        } else if ( newpass != newpass2 ){ 
            cout << "Your password is incorrect" << endl;
            cout << "Would you like to continue? (y/n) ";
            cin >> a;

            if ( a == 'y'){
                system("pause");
                system("cls");
                goto sign;
            } else if ( a == 'n' ){
                system("cls");
                goto dua;
            } else {
                cout << "System error" << endl;
                goto sign;
            }
        } else {
            cout << endl;
            cout << "Sorry, please use the correct term." << endl;
            system("pause");
            system("cls");
            goto sign;
        }
    case 3:
        cin.ignore();
        system("cls");
               
    }
    dua:
    cout << "Thank you!" << endl;
    system("pause");
    return 0;
}
