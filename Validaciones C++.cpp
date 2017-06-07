#include <iostream>
#include <cstring>
#include <limits>
using namespace std;
bool verif_solo_numeros(char cad[])
{
	bool k = true;
	int i = 0;
	while(i < strlen(cad) && k==true)
	{
		if((cad[i] >= '0') && (cad[i] <= '9'))
			i++;
		else
			k = false;
	}
	if (strlen(cad)==0)
		k =  false;
	return k;
}

int leerNumeros()
{
	char numero[200];
	if (cin.peek() == '\n') cin.ignore();
	do
	{
		gets(numero);
		if (!verif_solo_numeros(numero)) cout << "Ingrese un numero" << endl;
	} while (!verif_solo_numeros(numero));
	return atoi(numero);
}

float leerDecimales()
{
	float res;
    cin >> res;
    while (cin.fail())
    {
        cout << "Ingrese un valor valido" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');;
        cin >> res;
    }
    return res;
}

int main()
{
    int a;
    a = leerNumeros();
    return 0;
}
