#include <iostream>

int main()
{
    std::string name; //переменная для имени пользователя
    std::cout << "Enter your name: "; //просьба ввести имя
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl; //вывод Hello world from <имя пользователя>
    return 0;
}
