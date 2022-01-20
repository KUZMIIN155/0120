#ifndef WINDRANGER_H
#define WINDRANGER_H
#include <unit.h>

class WindRanger : public Unit {
public:
    WindRanger();
    void PowerShot(Unit &enemy);
};

#endif // WINDRANGER_H
