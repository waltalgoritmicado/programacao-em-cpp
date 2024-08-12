#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mensagem[20];
    strcpy(mensagem, "Olá mundo\n");

    //
    //    As duas linhas anteriores podem ser substituídas por
    //

    // char mensagem[0] = "Olá mundo\n";
    // cout << mensagem;
}
