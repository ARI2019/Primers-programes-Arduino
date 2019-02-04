
//********** Variables ********************************************************

float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results
//********** Setup ************************************************************

void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}
//********** Loop *************************************************************

void loop() {
  while (Serial.available() > 0) // if there's any serial available, read it
    {  
    r1 = Serial.parseInt();// look for valid int the incoming serial stream

     r1 = 1500;
     Serial.print("r1 = ");
     Serial.println(r1);
     Serial.println("ohms");

    
    r2 = Serial.parseInt();

    r2 = 25;
    Serial.print("r2 = ");
    Serial.print(r2);
    Serial.println("ohms");

    if (Serial.read() == '\n') //look for newline. Is the end of your sentence
    { 
      rSerie = r1 + r2;
      Serial.print("rSerie = ");
      Serial.print(rSerie);
      Serial.println("ohms");

      rParalel = 1 / ( (1/r1) + (1/r2) );
      Serial.print("rParalel = ");
      Serial.print(rParalel);
      Serial.println("ohms");


      Serial.print("Entra nous valors per r1 i r2");
    }
  }
}
