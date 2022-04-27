/*
 * @Author: lwj
 * @Date: 2022-04-27 19:52:53
 * @Description:枪类声明
 */
#pragma once
#include <iostream>
#include <string>

class Gun
{
public:
    Gun(std::string type)
    {
        this->_type = type;
        this->_bullet_count = 0;
    }
    void addBullet(int bullet_number);
    bool shoot();

private:
    std::string _type; //枪类型
    int _bullet_count; //子弹数
};