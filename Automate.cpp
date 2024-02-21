// Automate.cpp
#include <iostream>
#include "Automate.h"
#include "Etats/Etat.h"
#include "Etats/E0.h"


void Automate::decalage(Symbole *s, Etat *e) {
    s->Affiche();
    std::cout << " : décalage, on empile l'état " << e->getName() << std::endl;
    pileEtats.push(etatCourant);
    pileSymboles.push(s);
    etatCourant = e;
    lexer->Avancer();
}

void Automate::reduction(int n, Symbole *s) {
    std::cout << " : réduction de " << n << " symboles" << std::endl;
    for (int i = 0; i < n; i++) {
        pileEtats.pop();
    }
    pileEtats.top()->transition(*this, s);
}

void Automate::transitionSimple(Symbole *s, Etat *e) {
    std::cout << " : transition simple vers l'état " << e->getName() << std::endl;
    pileSymboles.push(s);
    pileEtats.push(e);

}

void Automate::run() {
    // ... La logique de la machine à états
}


Automate::Automate(const Lexer &lexer) {
    this->lexer = new Lexer(lexer);
    etatCourant = new E0(); //TODO : Affecter l'état initial
    pileEtats.push(etatCourant);
}


