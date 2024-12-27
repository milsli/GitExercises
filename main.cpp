#include <iostream>
#include <string>
#include "addings.h"

using namespace std;


string masterFromGit2()
{
    return "\nJestem na masterze GitTheSecond\n";
}

string naMasterze()
{
    return "\nJestem na masterze\n";
}

int main()
{
    Addings adds;
    cout << masterFromGit2();

    return 0;
}
