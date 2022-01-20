#include "windranger.h"

WindRanger::WindRanger() {
    this->health = 100;
    this->armor = 6;
    this->damage = 30;
    strcpy(this->name, "WindRanger");
}

void WindRanger::PowerShot(Unit &enemy) {
    int uron = this->damage * 2.2;
    enemy.health -= uron;
    cout << this->name<< " smalaet v " << enemy.name
         << " i nanosit " << uron << " urona "
         << endl;
}
