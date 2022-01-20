#include "unit.h"
#include "pudge.h"
#include "windranger.h"

int main(int argc, char *argv[])
{
    WindRanger u1;
    Pudge u2;

    for (int i = 0; i < 10; i++) {
        u1.attack(u2);
        u2.MeatHoock(u1);

        if (u1.health <=0||u2.health <=0) {
            if (u1.health <=0)
                cout << "Win " << u2.name << endl;
            else
                cout << "Win " << u1.name << endl;
            break;
        }
    }


    return 0;
}
