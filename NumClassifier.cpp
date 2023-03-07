#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

string test(int inpNum) {
	string output("Divisivel por: ");
	
	if (inpNum % 10 == 0) {
		output.append("10, 5 e 2");
		
		return output;
	} else if (inpNum % 5 == 0) {
		output.append("5");
		
		return output;
	} else if (inpNum % 2 == 0) {
		output.append("2 ");
		
		return output;
	}
	
	return "Nao divisivel por 10, 5 ou 2";
}

int main(int argc, char* argv[]) {
	if (argc == 2) {
		int execArg = atoi(argv[1]);
		
		string out = test(execArg);
		cout << out;
	} else {
		int conArg;
		
		cout << "Digite um numero para testar: ";
		cin >> conArg;
		
		string out = test(conArg);
		cout << out << endl;
		cout << "Aperte ENTER para fechar";
		getch();
	}
	return 0;
}
