#include <iostream>

using namespace std;

float calcularMediaGlobal();

int main()
{
    for(;;)
    {
        int i = 1;
        float n1, n2, media = 0;

        do
        {
            cout << "\t- Media Global -\n"
                    "Media da materia 1 (0 a 10):\n"
                    "N1: ";
            cin >> n1;

            if(n1 < 0 or n1 > 10 )
            {
                cout << "\nErro: Valor da nota fora do intervalo de 0 a 10. ";
                system("pause");
                system("cls");
            }
        } while (n1 < 0 or n1 > 10);

        while (n1 > 0 and n1 <= 10)
        {
            cout << "N2: ";
            cin >> n2;
            while(n2 < 0 or n2 > 10)
            {
                cout << "N2 (0 a 10): ";
                cin >> n2;
            }
            media += n1 * 0.4 + n2 * 0.6;
            cout << "Media " << i << ": " << n1 * 0.4 + n2 * 0.6 << "\n";

            i++;
            cout << "\nMedia da materia " << i << ": (valor negativo para encerrar)\n"
                    "N1: ";
            cin >> n1;
        }

        cout << "\nMedia Global: " << media / (i - 1) << endl;
        system("pause");
        system("cls");
    }
}
