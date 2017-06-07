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
