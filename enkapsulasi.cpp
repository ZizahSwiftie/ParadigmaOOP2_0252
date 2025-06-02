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

int main()
{
    remoteLampu lampuRumah;

    lampuRumah.setSaklar(0, "Lampu Teras Rumah");
    lampuRumah.setSaklar(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklar(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklar(3, "Lampu Dapur");

    cout << lampuRumah.getSaklar(0) << endl;
    cout << lampuRumah.getSaklar(1) << endl;
    cout << lampuRumah.getSaklar(2) << endl;
    cout << lampuRumah.getSaklar(3) << endl;

    return 0;
}