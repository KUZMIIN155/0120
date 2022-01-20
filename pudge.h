#ifndef PUDGE_H
#define PUDGE_H
#include "unit.h"

class Pudge : public Unit {
public:
    Pudge();
    void MeatHoock(Unit &enemy);
};

#endif // PUDGE_H
