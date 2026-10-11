#include "BankAccount.hpp"

int main() {
    BankAccount a("FR123", 100.0);   // <-- déclaration de a
    a.afficher();
    a.deposer(50);
    a.retirer(30);
    a.retirer(500);
    a.deposer(-10);

    BankAccount b;
    b.afficher();
    return 0;
}


