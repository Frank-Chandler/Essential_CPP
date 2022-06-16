#include <iostream>
#include <string>

using namespace std;//避免命名冲突

int main()
{
    string user_name;
    cout << "please enter your first name:";
    cin >> user_name;
    cout << "\nHello, "<<user_name<<"... and goodbye!\n";
    return 0;//习惯上，程序执行无误时我们令main（）返回零
}