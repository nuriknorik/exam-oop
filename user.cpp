#include <iostream>
#include <string>
#include "user.h"
using namespace std;
string User::valuation[12]{};
size_t User::count{};
int ex{};
int size{};
void User::final(){
    if(this->alreadylogin == 1){ //показывает что пользователь зарегистрирован
        string passwordd;
        string loggin;
        cout << "Please,Enter your login:  ";
        cin >> loggin;
        cout << "Please,Enter your Password: ";
        cin >> passwordd;
        if(loggin == this->login && passwordd == this->password){
            cout << "USERNAME: " << this->username << endl;
            for (int i=0; i < this->size; i++) {
                if(this->rating[i] < 7){
                    cout << "sorry,come to the retake" << endl;
                }
                else{
                    cout << "YOU PASSED THE EXAM" << endl;
                }
            }
        }
    }
}
void User::question(int ques){
    string reply{};
    if(this->ex == 0 && this->ex == ques){
        cout <<"Please answer question" << ques  << endl;
        cin >> reply;
        if(reply == "yes"){
            this->rating[this-> size];
        }
    }
}
