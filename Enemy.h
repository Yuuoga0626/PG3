#pragma once
class Enemy
{
public:
    void Update();

    void Approach();
    void Shot();
    void Escape();

    void (Enemy::*state_)();

    Enemy();
};

