#ifndef MOVIMENTO_H
#define MOVIMENTO_H

#define VEL_PARA_FRENTE 50

#include <robo_hardware2.h>

class Movimento{

  public:

  void paraFrente();
  inline void parar() {robo.acionarMotores(0,0);}
  

};

#endif