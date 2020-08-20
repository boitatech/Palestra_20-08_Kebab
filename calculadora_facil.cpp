#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int num1, num2;
	
	cout << "- = CALCULADORA = -" << endl;
	
	cout << "Inserir o primeiro numero:	" << endl;
	cin  >> num1;
	
	cout << "Inserir o segundo numero:	" << endl;
	cin  >> num2;
	
	cout << "A soma e:	" << num1 + num2 << endl;
	cout << "A subtracao e:	" << num1 - num2 << endl;
	cout << "A multiplicacao e:	" << num1 * num2 << endl;
	cout << "A divisao e:	" << num1 / num2 << endl;

	system("pause");
	return 0;
}


