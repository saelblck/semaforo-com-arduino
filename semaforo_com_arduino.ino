//--- SEMAFORO ARDUINO ---//
// feito por: samuel a (@Saelblck)

//--- mapeamento de hardware ---//
#define verde 4
#define amarelo 3
#define vermelho 2

//--- variaveis globais ---//
int seg = 1000;
void setup() {
  	//define os pinos dos LEDs como saida
	pinMode(verde, OUTPUT);
  	pinMode(amarelo, OUTPUT);
  	pinMode(vermelho, OUTPUT);
  
  	//inicia o sinal
  	digitalWrite(amarelo, HIGH);
  	delay(seg);
  	digitalWrite(amarelo, LOW);
  	delay(seg/2);
  	digitalWrite(amarelo, HIGH);
  	delay(seg);
  	digitalWrite(amarelo, LOW);
  	delay(seg/2);
  	digitalWrite(amarelo, HIGH);
  	delay(seg);
  	digitalWrite(amarelo, LOW);
  	delay(seg/2);
  	digitalWrite(amarelo, HIGH);
} //end setup
void loop() {
  if (amarelo) { //liga o amarelo por 5seg
  	delay(seg*5);
    digitalWrite(amarelo, LOW);
    
    digitalWrite(vermelho, HIGH);
  }
  if (vermelho) { //liga o vermelho por 10seg
  	delay(10*seg);
    digitalWrite(vermelho, LOW);
    
    digitalWrite(verde, HIGH);
  }
  if (verde) { //lig o verde por 10seg
  	delay(10*seg);
    digitalWrite(verde, LOW);
    
    digitalWrite(amarelo, HIGH);
  }
} //end loop