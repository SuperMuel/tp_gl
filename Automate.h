// Automate.h
#pragma once
#include <stack>
#include "Etats/Etat.h"
#include "lexer.h"

class Etat; // Déclaration anticipée

class Automate {
private:
    std::stack<Etat*> pileEtats;
    std::stack<Symbole*> pileSymboles;
    Etat* etatCourant;
    Lexer* lexer;

public:
    Automate(const Lexer &lexer);
    void run();

    void decalage(Symbole *s, Etat *e);

    void reduction(int n, Symbole *s);

    void transitionSimple(Symbole *s, Etat *e);
};
