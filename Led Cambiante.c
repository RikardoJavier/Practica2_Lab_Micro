//////////////////////
//Declaracion de Pines
//////////////////////
  const int LED0=4;
  const int LED1=5;
  const int LED2=6;
  const int LED3=7;
  const int LED4=8;
  const int LED5=9;
  int UpButton=2;
  int DownButton=3;
////////////////////
//Variables
////////////////////
  int boton_Anterior=1;

//////////////////////
//Estructura o clase
//////////////////////
void setup()
{
  UpButton = digitalRead(2);
  DownButton = digitalRead(3);
  pinMode(LED0,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(UpButton,INPUT);
  pinMode(DownButton,INPUT);
  Serial.begin(9600);
}
////////////
//Main loop
///////////
void loop()
{
 UpButton = digitalRead(2);
 DownButton = digitalRead(3);
  ////////////////
  //Condicionales
  ////////////////
  if (digitalRead(2) == true && boton_Anterior<=6)//Bloqueo para que no cuente de mas
    {
      if (digitalRead(2) == false)
         {
        	boton_Anterior++;
            Serial.print(boton_Anterior);
            delay(100);
          }
    }
   if (digitalRead(3) == true && boton_Anterior>=1)
        {
          if (digitalRead(3) == false)
           {
              boton_Anterior--;
              Serial.print(boton_Anterior);
              delay(100);
           }
        }
  //////////////////////////////////////////
  //Encendido de los LEDS mas Condicionales
  //////////////////////////////////////////
  digitalWrite(LED0,boton_Anterior==1);//Si Boton_Anterior es igual a 1,enciende e led
  digitalWrite(LED1,boton_Anterior==2);//Si Boton_Anterior es igual a 2,enciende e led
  digitalWrite(LED2,boton_Anterior==3);//Si Boton_Anterior es igual a 3,enciende e led
  digitalWrite(LED3,boton_Anterior==4);//Si Boton_Anterior es igual a 4,enciende e led
  digitalWrite(LED4,boton_Anterior==5);//Si Boton_Anterior es igual a 5,enciende e led
  digitalWrite(LED5,boton_Anterior==6);//Si Boton_Anterior es igual a 6,enciende e led
      	
}