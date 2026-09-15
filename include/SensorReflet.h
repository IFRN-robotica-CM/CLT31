#define DIVISOR_BRANCO_PRETO_MAIS_ESQ 80
#define DIVISOR_BRANCO_PRETO_ESQ 80
#define DIVISOR_BRANCO_PRETO_DIR 70
#define DIVISOR_BRANCO_PRETO_MAIS_DIR 80

#include <robo_hardware2.h> 

class SensorReflet{

  private:
  float valorSensorDir;
  float valorSensorEsq;
  float valorSensorMaisEsq;
  float valorSensorMaisDir;


  public:

  inline bool pppp() { return (valorSensorMaisEsq < DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ  && valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisDir < DIVISOR_BRANCO_PRETO_MAIS_DIR); }

  inline bool bbbb(){ return (valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq > DIVISOR_BRANCO_PRETO_ESQ && valorSensorDir > DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_DIR); }

  inline bool bbbp(){ return (valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq > DIVISOR_BRANCO_PRETO_ESQ && valorSensorDir > DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisDir < DIVISOR_BRANCO_PRETO_MAIS_DIR);}

  inline bool bbpb(){ return (valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq > DIVISOR_BRANCO_PRETO_ESQ && valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);}
  
  inline bool bbpp(){ return (valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq > DIVISOR_BRANCO_PRETO_ESQ && valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisDir < DIVISOR_BRANCO_PRETO_MAIS_DIR);}
  
  inline bool bpbb(){ return (valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorDir > DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);}
  
  inline bool bppb(){ return (valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);}
  
  inline bool bppp(){ return (valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisDir < DIVISOR_BRANCO_PRETO_MAIS_DIR);}
  
  inline bool pbbb(){ return (valorSensorMaisEsq < DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq > DIVISOR_BRANCO_PRETO_ESQ && valorSensorDir > DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);}
 
  inline bool ppbb(){ return (valorSensorMaisEsq < DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorDir > DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);}
  
  inline bool pppb(){ return (valorSensorMaisEsq < DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);}
  
  void ler();

};