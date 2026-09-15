#include <robo_hardware2.h> 
#include <Servo.h>
# include "Movimento.h"


//-----PINOS PARA LIGAR MOTORES-----//
//Motor1:
//pino1 PWM_RODA_DIREITA  6
//pino2 SENTIDO_RODA_DIREITA  7
//
//Motor2:
//pino1 PWM_RODA_ESQUERDA   530
//pino2 SENTIDO_RODA_ESQUERDA 4
//-----PINOS PARA LIGAR MOTORES-----//

//-----PINOS PARA SENSORES REFLETANCIA-----//
//SENSOR_LINHA_MAIS_ESQUERDO      A3
//SENSOR_LINHA_ESQUERDO         A2
//SENSOR_LINHA_DIREITO          A1  
//SENSOR_LINHA_MAIS_DIREITO     A0  
//-----PINOS PARA SENSORES REFLETANCIA-----//



#define DIVISOR_DE_DISTANCIA 15

#include "SensorReflet.h"



// 
// 
// 

SensorReflet sensorlinha;
Movimento movimento;

void setup(){
  robo.configurar();
  Serial.begin(9600);
}

void loop(){

  //Identifica se os dois sensores viram branco

  if(sensorlinha.bbbb()){
    // Serial.println("Está tudo branco");
    movimento.paraFrente();

  }else{
    Serial.println("fALHOU");
  }
  delay(1000);
   
  // if (pppp()){ 
  //   robo.acionarMotores(0,0);}
  // else if (pppb()){ 
  //   robo.acionarMotores(-0,80);}
  // else if (ppbb()){ 
  //   robo.acionarMotores(-0,80);}
  // else if (pbbb()){  
  //   robo.acionarMotores(-0,80);}
  // else if(bppp()){ 
  //   robo.acionarMotores(80,-0);}
  // else if(bppb()){
  //   robo.acionarMotores(80,80);}
  // else if(bpbb()){ 
  //   robo.acionarMotores(-0,80);}
  // else if(bbpp()){
  //   robo.acionarMotores(80,-0);}
  // else if(bbpb()){
  //   robo.acionarMotores(80,-0);}
  // else if(bbbp()){
  //   robo.acionarMotores(80,-0);}
  // else if(bbbb()){
  //   robo.acionarMotores(80,80);}
  //   else{
  //     robo.acionarMotores(0,0);
  // delay(1000);
  // robo.acionarMotores(40, -40);
  // delay(210);
  // robo.acionarMotores(0,0);
  // delay(1000);
  //   }
  
}
