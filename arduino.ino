#include <math.h>

const int PinoSensor = 0; //pino Anlógico de Entrada 0 
int ValorSensor = 0;  

//Coeficientes de Calibração:
double p1 = 0.001251;
double p2 = -1.301;
double p3 = 362.9;

double  ValorCalibrado (double p1, double p2, double p3, int valorSensor){
  return (p1*pow(valorSensor,2)+p2*valorSensor+p3); 
}
 
void setup(){ 
 Serial.begin(9600);  
} 
 void loop(){ 
 ValorSensor = analogRead(PinoSensor);
 Serial.println(ValorCalibrado(p1,p2,p3,ValorSensor)); 
 delay(1000);  
} 
