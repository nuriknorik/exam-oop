#include <iostream>
#include "user.h"
using namespace std;
class Base {
public:
    Base () = default;

//это для админа
    Base addnewuser();  //добавление нового пользователя
    Base deleteuser(Base base); //удаление пользователя
    void changepassword();  //смена пароля


    string namesurname{};
    string address{};
    string mob{};
    string subject{};
    size_t username;
    string login;
    string password;
    static int count;

    Base (string login, string password,string namesurname, string address, string mob, string subject) {
        this->username = Base::count;
        if (username == 1) {
            this->login = login;

            this->password = password;

            this->namesurname = namesurname;

            this->address = address;

            this->mob = mob;

            this->subject= subject;


            cout << "You are successfuly registed: " << username << endl;  //в случае удачной регистрации
        } else
            cout << "You can't registed , because we're have an ADMIN " << endl;  // в случае не удачной регистрации
    }

    //это для пользователя (юзера)
    User deleteuser(User user);  //для удаления
    User changesuser(User user);   //для внесения изменений
};
