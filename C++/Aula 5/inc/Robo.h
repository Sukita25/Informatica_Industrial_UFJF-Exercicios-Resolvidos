#ifndef Robo_H
#define Robo_H
class Robo
{
private:
    float pos[2];
    float speed[2];
public:
    Robo(float Vx, float Vy);
    int id;
    void showPos();
    void move(float t);
    void changeSpeed(float x,float y);
};

#endif
