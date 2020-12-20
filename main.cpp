#include <iostream>

using namespace std;

int main()
{
    for(;;)
    {
        int i = 1;
        float n1, n2, media = 0;

        cout << "\t- Media Semestral -\n"
                "De qual semestre deseja calcular a media?\n"
                "0 - Atual\n"
                "1 - Anterior ao atual\n"
                "> ";
        cin >> n1;

        if (!n1)
        {
            system("cls");
            do
            {
                cout << "\t- Media do Semestre Atual -\n"
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

            while (n1 >= 0 and n1 <= 10)
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

            cout << "\nMedia do semestre atual: " << media / (i - 1) << endl;
        }
        else
        {
            if(n1 == 1)
            {
                system("cls");
                do
                {
                    cout << "\t- Media Semestral -\n"
                            "Media da materia 1 (0 a 10):\n"
                            "> ";
                    cin >> n1;

                    if(n1 < 0 or n1 > 10 )
                    {
                        cout << "\nErro: Valor da nota fora do intervalo de 0 a 10. ";
                        system("pause");
                        system("cls");
                    }
                } while (n1 < 0 or n1 > 10);

                while (n1 >= 0 and n1 <= 10)
                {
                    media += n1;
                    i++;
                    cout << "\nMedia da materia " << i << ": (valor negativo para encerrar)\n"
                            "> ";
                    cin >> n1;

                }
                cout << "\nMedia semestral: " << media / (i - 1) << endl;
            } else
                cout << "\nErro: opcao invalida. Digite  0  p/ selecionar o semestre atual e  1  p/ semestres anteriores. ";
        }
        system("pause");
        system("cls");
    }
}
