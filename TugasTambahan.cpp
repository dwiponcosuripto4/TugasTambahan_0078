#include <iostream>
using namespace std;

class Segitiga
{
private:
    float luas(int a, int t)
    {
        return 0.5 * a * t;
    }

public:
    void inputData()
    {
        int alas, tinggi;
        cout << "Masukkan Alas Segitiga : ";
        cin >> alas;

        cout << "Masukkan Tinggi Segitiga : ";
        cin >> tinggi;

        if (alas % 2 != 0)
        {
            cout << "Alas yang dimasukkan adalah bilangan ganjil, luas tidak dapat dihitung." << endl;
        }
        else
        {
            float hasilLuas = luas(alas, tinggi);
            cout << "Luas Segitiga : " << hasilLuas << " cm" << endl;
        }
    }
};

int main()
{
    Segitiga segitiga;
    segitiga.inputData();
}
