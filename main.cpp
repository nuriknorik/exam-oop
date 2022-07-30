#include <iostream>
#include <string>
#include "base.h"
using namespace std;
int main()
{
    User user("null", "null", "User User", "Azerbaijan", "+123-45*****", "C++");   //данные для пользователя юзера
    Base base("admin", "admin", "Nuray Cabrayilova", "Sahil", "+123-45*****", "C++");  //данные для админа
    user.final();
    return 0;
}
