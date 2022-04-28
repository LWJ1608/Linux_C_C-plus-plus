/*
 * @Author: lwj
 * @Date: 2022-04-28 16:04:26
 * @Description:
 */
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
    std::cout << "buuuuuuuu" << std::endl;
    std::cout << "buuuuuuuu" << std::endl;
    test();
    return 0;
}