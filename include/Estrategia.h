#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include "SensorReflet.h"
#include "Movimento.h"

class Estrategia{

    private:
        SensorReflet sensorLinha;
        Movimento movimento;

    public:
    void executar();
    void seguirLinha();

};


#endif