#include <iostream>
using namespace std;

class remoteLampu
{
private:
    string saklarNO[10];

public:
    void setSaklar(int i, string value)
    {
        saklarNo[i] = value;  
    }
    string getSaklar(int i)
    {
        return saklarNO[i];
    }
};