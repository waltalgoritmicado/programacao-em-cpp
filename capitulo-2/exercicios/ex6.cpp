#include <iostream>
using namespace std;

int main() {
	char primeiro, ultimo;
	cout << "Introduza suas inicias\n";
	cout << "\t Primeiro sobrenome:";
	cin >> primeiro;
	cout << "\t Segundo sobrenome:";
	cin >> ultimo;

	cout << "Olá, " << primeiro << ". "
		<< ultimo << ".!\n";

	return 0;

}
