#include <iostream>
#include <string>

using namespace std;

int main() {
	const int Lua = 238857;
	cout << "Distância até a lua " << Lua;
	cout << " milhas\n";
	int lua_kilo;
	lua_kilo= Lua * 1.609;
	cout << "Em quilômetros é " << lua_kilo;
	cout << " km.\n";

	return 0;
}
