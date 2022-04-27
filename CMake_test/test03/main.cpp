#include "Gun.h"
#include "Soldier.h"

void test()
{
    Soldier S("sbb");
    S.addGun(new Gun("AK74"));
    S.addBulletToGun(1);
    S.fire();
}

int main()
{
    test();
    return 0;
}