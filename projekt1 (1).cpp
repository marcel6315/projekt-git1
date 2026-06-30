#include <iostream>

using namespace std;


bool czyPierwsza(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int a, b;

    cout << "Podaj dwie liczby calkowite: ";
    cin >> a >> b;

    int wyjscie;

    do
    {
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "1. Sprawdz czy liczba jest pierwsza" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybor: ";
        cin >> wyjscie;

        switch (wyjscie)
        {
        case 1:
        {
            int liczba;

            cout << "Podaj liczbe: ";
            cin >> liczba;

            if (czyPierwsza(liczba))
                cout << liczba << " jest liczba pierwsza." << endl;
            else
                cout << liczba << " nie jest liczba pierwsza." << endl;

            break;
        }

        case 0:
            cout << "Koniec programu." << endl;
            break;

        default:
            cout << "Niepoprawny wybor!" << endl;
        }

    } while (wyjscie != 0);

    return 0;
}
