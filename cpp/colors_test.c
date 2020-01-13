#include <iostream>
#include "colors.h"
using namespace std;

int main()
{
    cout << FBLU("I'm blue.") << endl;
    cout << BOLD(FBLU("I'm blue-bold.")) << endl;
    return 0;
}
