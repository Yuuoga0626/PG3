#include "Enemy.h"
#include <iostream>

void Enemy::Update()
{
    (this->*state_)();
}

void Enemy::Approach()
{
    std::cout << "接近" << std::endl;
    state_ = &Enemy::Shot;
}

void Enemy::Shot()
{
    std::cout << "射撃" << std::endl;
    state_ = &Enemy::Escape;
}

void Enemy::Escape()
{
    std::cout << "離脱" << std::endl;
    state_ = &Enemy::Approach;
}

Enemy::Enemy()
{
    state_ = &Enemy::Approach;
}
