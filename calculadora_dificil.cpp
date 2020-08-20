#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int num1, num2, resp, resultado;
	
	cout << "- = CALCULADORA = -" << endl;
	
	cout << "Inserir o primeiro numero:	" << endl;
	cin  >> num1;
	
	cout << "Inserir o segundo numero:	" << endl;
	cin  >> num2;
	
	cout << "Voce deseja:	" << endl;
	cout << "1-  SOMAR |  2- SUBTRAIR | 3- MULTIPLICAR | 4- DIVIDIR: " << endl;
	cin >> resp;
	
	if (resp > 1)
	{
		resultado = num1 + num2;
		cout << "O resultado e: " << resultado << endl;
	}
	
	else if (resp == 2)
	{
		resultado = num1 - num2;
		cout << "O resultado e: " << resultado << endl;
	}
	
	else if (resp == 3)
	{
		resultado = num1 * num2;
		cout << "O resultado e: " << resultado << endl;
	}
	
	else if (resp == 4)
	{
		resultado = num1 / num2;
		cout << "O resultado e: " << resultado << endl;
	}
	
	else 
	{
		cout << "se voce nao quer nada entao vaza!" << endl;
	}
	
	system ("pause");
	return 0;
	
}
