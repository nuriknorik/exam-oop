#include <iostream>
#include <string>
#include "base.h"
using namespace std;
int ex{};
User Base::changesuser(User user){      //изменения которые можно делать
    string passwordd;
    string loggin;
    cout << "Please,Enter your login:  ";    //для авторизации в аккаунт
    cin >> loggin;
    cout << "Please,Enter your Password: ";
    cin >> passwordd;
    if(loggin == this->login && passwordd == this->password){
        string variant{};
        int choice{};
        cout << "Hello my Dear,please,if you want to continue,fill in fields:"  <<endl;//что нужно заполнить пользователем
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "ENTER OLD NAME AND SURNAME " << user.namesurname << endl;
                cout << "ENTER NEW NAME AND SURNAME: ";
                cin >> variant;
                user.namesurname = variant;
                break;
            case 2:
                cout << "PLEASE,ENTER OLD LOGIN: " << user.login << endl;
                cout << "ENTER NEW LOGIN: ";
                cin >> variant;
                user.login = variant;

                break;
            case 3:
                cout << "PLEASE,ENTER OLD PASSWORD: " << user.password << endl;
                cout << "ENTER NEW PASSWORD: ";
                cin >> variant;
                user.password = variant;
                break;
            case 4:
                cout << "ENTER OLD ADRESS: " << user.address << endl;
                cout << "ENTER NEW ADRESS: ";
                cin >> variant;
                user.address = variant;
                break;
            case 5:
                cout << "ENTER OLD NUMBER MOBILE PHONE: " << user.namesurname << endl;
                cout << "ENTER NEW NUMBER OF MOBILE PHONE: ";
                cin >> variant;
                user.namesurname = variant;
                break;
            case 6:
                cout << "ENTER OLD SUBJECT " << user.subject << endl;
                cout << "ENTER NEW SUBJECT: ";
                cin >> variant;
                user.subject = variant;
                break;
        }
        return user;
    }
    return User();
}
Base Base::addnewuser() {      // добавление нового пользователя
    string passwordd;
    string loggin;
    cout << "Please,Enter your login:  ";    //для авторизации в аккаунт
    cin >> loggin;
    cout << "Please,Enter your Password: ";
    cin >> passwordd;
    if(loggin == this->login && passwordd == this->password){
        string firstlastname{}, home{}, phone{}, subjects{},loginsign{},passwordsign{};
        cout << "Success" << endl;
        cout << "Hello my Dear,please,fill in fields:" <<endl;

        Base newbase(firstlastname, home, phone, subjects,loginsign,passwordsign);  //что нужно заполнить админом если ему нужно добавить пользователя

        cout << "ENTER LOGIN ";
        cin >> loginsign;

        cout << "ENTER PASSWORD: ";
        cin >> passwordsign;

        cout << "ENTER FIRST AND LAST NAME: ";
        cin >> firstlastname;

        cout << "ENTER THE SUBJECT: ";
        cin >> subjects;

        cout << "ENTER HOME ADRESS";
        cin >> home;

        cout << "ENTER MOBILE PHONE: ";
        cin >> phone;

        return newbase;
    }
    return Base();
}

void Base::changepassword(){     // смена пароля со старого на новый
    string passwordd;
    string loggin;
    cout << "Please,Enter your login:  ";   //для авторизации в аккаунт
    cin >> loggin;
    cout << "Please,Enter your Password: ";
    cin >> passwordd;
    if(loggin == this->login && passwordd == this->password){
        int choice;
        cout << "Lucky!" << endl;
        do{
            cout << "Hello.want to change p-assword,enter \"1\" "
                    "If you want to change login enter \"2\""
                 <<endl;
            cin >> choice;
            if(choice == 1){
                string newpassword;
                cout << "Please,enter new password: " << endl;
                cin >> newpassword;
                this->password = newpassword;
            }
            if(choice == 2){
                string newlogin;
                cout << "Please,enter new login: " << endl;
                cin >> newlogin;
                this->login = newlogin;
            }
        }
        while (choice != 1);{
            cout<<"You are doesn't entered new password";
        }
        if(choice !=2){
            cout<<"You are doesn't entered new login";
        }
    }

};

User Base::deleteuser(User user){
    string passwordd;
    string loggin;
    User base(string login,string namesurname,string adress,string mob);

    cout << "Please,Enter your login:  ";     //для авторизации в аккаунт
    cin >> loggin;

    cout << "Please,Enter your Password: ";
    cin >> passwordd;

    if(loggin == this->login && passwordd == this->password){
        user.alreadylogin = 0;
        return user;
    }
    return User();
}
