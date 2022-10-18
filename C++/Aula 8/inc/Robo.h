#ifndef ROBO_H
#define ROBO_H

class Robo{
    protected:
        double PosicaoAtual[3]; //X Y Z  
    public:
        double getPosicaoAtual(char cordenada);
        void setPosicaoAtual(double x, double y, double z);
        virtual void Move(double Xvel, double Yvel, double Zvel, double tempo) = 0;
        virtual ~Robo();
};

class RoboTerrestre:public Robo{
    public:
        RoboTerrestre();
        ~RoboTerrestre();
        void Move(double Xvel, double Yvel, double Zvel, double tempo);
};

class Quadricopitero:public Robo{
    public:
        Quadricopitero();
        ~Quadricopitero();
        void Move(double Xvel, double Yvel, double Zvel, double tempo);
};


#endif
