#include <iostream>
#include <string>
#include "addings.h"

using namespace std;



string naMasterze()
{
    return "\nJestem na masterze\n";
}

string naGaleziAddings()
{
    return "\nJestem na Addings\n";
}

int main()
{
    cout << naGaleziAddings();
    Addings adds;

    return 0;
}
