#include "Library.hpp"

int main() {
    Library bibliotheque;

    // Ajouter des livres
    bibliotheque.ajouterLivre(Book("Le Petit Prince", "Saint-Exupery", "111", 1943));
    bibliotheque.ajouterLivre(Book("L'Etranger", "Camus", "222", 1942));

    // Tester un ISBN deja utilise (doit afficher une erreur)
    bibliotheque.ajouterLivre(Book("Autre livre", "Inconnu", "111", 2000));

    // Lister le catalogue
    bibliotheque.listerLivres();

    // Rechercher un livre par ISBN
    const Book* livre = bibliotheque.trouverParISBN("222");
    if (livre != nullptr) {
        std::cout << "Livre trouve : ";
        livre->afficher();
    } else {
        std::cout << "Livre introuvable.\n";
    }

    // Rechercher un ISBN qui n'existe pas
    if (bibliotheque.trouverParISBN("999") == nullptr) {
        std::cout << "ISBN 999 : introuvable.\n";
    }

    return 0;
}




