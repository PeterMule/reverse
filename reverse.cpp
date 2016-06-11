#include <iostream>
#include <cmath>
using namespace std;
template <typename Tes> // so that it can be only as large as intended

int numberofdigits(Tes number)
{
    int counter=1;
    for(Tes x=9;x<=number;counter++,x=x+(9*pow(10,counter)))
    {
        cout << "compared " << x << " <= " << number << "  and was true" << endl;
    }
    return (counter);
}

