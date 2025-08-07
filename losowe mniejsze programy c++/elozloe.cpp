#include <iostream>
#include <cstdlib>
using namespace std;

class Tablica
{
private:
    int rozmiarTablicy;
    int *tablica;

public:
    Tablica(int rozmiarTablicy)
    {
        this->rozmiarTablicy = rozmiarTablicy;
        tablica = new int[rozmiarTablicy];
        for (int i = 0; i < rozmiarTablicy; i++)
        {
            tablica[i] = rand() % 100 + 1;
        }
    }

    void wyswietl()
    {
        for (int i = 0; i < rozmiarTablicy; i++)
        {
            cout << i << ": " << tablica[i] << endl;
        }
    }
    int wyszukaj(int szukana)
    {
        int indeks;
        bool znalezione = false;
        for (int i = 0; i < rozmiarTablicy; i++)
        {
            if (tablica[i] == szukana)
            {
                indeks = i;
                znalezione = true;
                break;
            }
        }
        if (znalezione = true)
        {
            return (indeks);
        }
        else
        {
            return (-1);
        }
    }
    int nieParzuste()
    {
        int licznik;
        for (int i = 0; i < rozmiarTablicy; i++)
        {
            if (tablica[i] % 2 != 0)
            {
                cout << tablica[i] << endl;
                licznik++;
            }
        }
        cout << "Razem nieparzystych: " << licznik << endl;
    }
    float srednia()
    {
        int suma = 0;
        float wynik;
        for (int i = 0; i < rozmiarTablicy; i++)
        {
            suma += tablica[i];
        }
        wynik = suma / rozmiarTablicy;
        return (wynik);
    }
};
int main()
{

    Tablica tab(21);
    tab.wyswietl();
    cout<<"wyszukana " << tab.wyszukaj(25) << endl;
    tab.nieParzuste();
    cout << tab.srednia();

    return (0);
}
