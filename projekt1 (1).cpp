#include <iostream>

using namespace std;

int silnia(int n)
{
    if (n < 0)
        return -1;

    int wynik = 1;

    for (int i = 1; i <= n; i++)
        wynik *= i;

    return wynik;
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
        cout << "===== MENU =====" << endl;
        cout << "1. Oblicz silnie" << endl;
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

            int wynik = silnia(liczba);

            if (wynik == -1)
                cout << "Silnia nie istnieje dla liczb ujemnych." << endl;
            else
                cout << "Silnia liczby " << liczba << " wynosi " << wynik << endl;

            break;
        }

        case 0:
            cout << "Koniec programu." << endl;
            break;

        default:
            cout << "Niepoprawny wybor." << endl;
        }

    } while (wyjscie != 0);

    return 0;
}
