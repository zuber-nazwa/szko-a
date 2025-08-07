#include <iostream>
#include <string>
using namespace std;
class urzadzenie
{
public:
    void wys(string komunikat)
    {
        cout << komunikat << endl;
    }
};
class pralka : public urzadzenie
{
private:
    int numerPrania = 0;

public:
    int ustawNumerPrania(int numer)
    {
        if (numer > 0 && numer < 12)
        {
            numerPrania = numer;
            return (numerPrania);
        }
        else
            return (0);
    }
};
class odkurzacz : public urzadzenie
{
private:
    bool stanOdkurzacza = false;

public:
    void on()
    {
        if (stanOdkurzacza == false)
        {
            stanOdkurzacza = true;
            wys("odkurzacz w��czono");
        }
    }
    void off()
    {
        if (stanOdkurzacza == true)
        {
            stanOdkurzacza = false;
            wys("odkurzacz wy��czono");
        }
    }
};
int main()
{
    int numerprania;
    pralka pralka;
    odkurzacz odkurzacz;

    odkurzacz.on();

    odkurzacz.on();

    odkurzacz.on();
    odkurzacz.wys("odkuracz wy�adowa� si�");
    odkurzacz.off();
    cout << "podaj numer prania od 1 do 12" << endl;
    cin >> numerprania;
    pralka.ustawNumerPrania(numerprania);
    if (pralka.ustawNumerPrania(numerprania) == 0)
    {
        cout << "Podano nie poprawny numer prania" << endl;
    }
    else
    {
        cout << "program zostasta� ustawiony" << endl;
    }
    return (0);
}
