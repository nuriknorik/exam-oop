#include <iostream>
using namespace std;
class User {

public:
    User() = default;
    static string valuation[];
    static size_t count;
    int rating[12]{};
    string mob{};
    string subject{};
    string namesurname{};
    string address{};
    size_t username;
    string login;
    string password;


    User(string login, string password,string namesurname, string address, string mob, string subject) {
        this->login = login;
        this->password = password;
        this->namesurname = namesurname;
        this->address = address;
        this->mob = mob;
        this->subject= subject;

    };
    void final();
    void question(int ex); //вопросы
    int size;
    int ex;
    int alreadylogin{};

};

