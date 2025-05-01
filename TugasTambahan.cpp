#include <iostream>
using namespace std;

class Segitiga
{
private:
    int alas, tinggi;
    float luas(int a, int t)
    {
        return 0.5 * a * t;
    }

public:
    void inputData()
    {
        cout << "Masukkan Alas Segitiga : ";
        cin >> alas;

        cout << "Masukkan Tinggi Segitiga : ";
        cin >> tinggi;
    }
};

int main()
{
}
