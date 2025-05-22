#include <iostream>

int main()
{
    std::string name; //переменная для имени пользователя
    std::cout << "Enter your name: "; //вывод: Enter your name: 
    std::cin >> name; // ввод имени пользователя
    std::cout << "Hello world from " << name << std::endl; //вывод: Hello world from <имя пользователя>
    return 0;
}
