/*
 * Lectura de botones, encedido de leds
 * Por: Samantha Jimenez
 * Fecha: 28 de junio de 2021
 * 
 * Este programa muestra las instrucciones básicas para la lectura de botones y
 * encendido de leds.
 */

// Bibliotecas

// Constantes
const int BOTON1=4;// este pin está disponible en el ESPCAM
const int LED1 =2;
// Variables
int dato1;

// Definición de objetos


// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código
  pinMode(BOTON1, INPUT_PULLUP);// configurar el pin donde se conecta botón
  pinMode(LED1,OUTPUT);// configurar el pin donde se conecta el led
  digitalWrite(LED1,LOW);// 0, false, LOW; 1, true HIGH
}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:
  dato1 = digitalRead(BOTON1);
}// Fin de void loop

// Funcioes del usuario
