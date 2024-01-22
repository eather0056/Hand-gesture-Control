
  int IR1 = 7;
  int IR2 = 8;
  int IR3 = 9;
  int IR4 = 10;
  int IR5 = 11;
  
 

void setup() {
Serial.begin(9600); 
  
pinMode(IR1, INPUT); 
pinMode(IR2, INPUT); 
pinMode(IR3, INPUT); 
pinMode(IR4, INPUT);
pinMode(IR5, INPUT); 

}


void loop() {


  int IRI1 = digitalRead(IR1);
  int IRI2 = digitalRead(IR2);
  int IRI3 = digitalRead(IR3);
  int IRI4 = digitalRead(IR4);
  int IRI5 = digitalRead(IR5);
  

//Pause Modes -Hold
if ((IRI1 == 0 && IRI2 == 0 && IRI3 == 0 ) || (IRI5 == 0 && IRI3 == 0 && IRI4 == 0 )) //Detect plam
{Serial.println("Play/Pause"); delay (500);}

 if ((IRI1 == 0 && IRI2 == 0 && IRI3 == 0 && IRI4 == 0&& IRI5 == 0)) //Detect forearm
{Serial.println("next"); delay (500);}

//Control Modes

if (IRI1 == 0 && IRI2 == 0 )
{Serial.println ("Rewind"); delay (300);}

if (IRI5 == 0 && IRI4 == 0 )
{Serial.println ("Forward"); delay (300);}

if (IRI2 == 0 && IRI3 == 0)
{Serial.println ("Vup"); delay (300);}

if ( IRI4 == 0 && IRI3 == 0 )
{Serial.println ("Vdown"); delay (300);}

delay(200);
}
