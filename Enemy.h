#pragma once 

class Enemy
{
public:
    Enemy(int posX, int posY, int speed, int radius, int isAlive);
    ~Enemy();

    void Update();

    void Draw();

public:
    static int enemyCount;
    int posX_;
    int posY_;
    int radius_;
    int speed_;
    int isAlive_;
};