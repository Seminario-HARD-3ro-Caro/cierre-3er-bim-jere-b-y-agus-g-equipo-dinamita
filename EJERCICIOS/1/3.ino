int x = 0; // Variable para llevar el seguimiento de los estados

void setup() {
  // Declaramos los pines como salida para los LEDs
  pinMode(11, OUTPUT);  // LED para el bit 3
  pinMode(10, OUTPUT);  // LED para el bit 2
  pinMode(9, OUTPUT);   // LED para el bit 1
  pinMode(6, OUTPUT);   // LED para el bit 0
  
  // Declaramos el pin 2 como entrada para el botón
  pinMode(2, INPUT);  // Entrada para detectar el pulsador
}

void loop() {
  // Si se presiona el botón
  if (digitalRead(2) == HIGH) {
    delay(50); // Añadimos un pequeño retardo para evitar rebotes
    
    // Si se detecta que el botón se ha soltado
    if (digitalRead(2) == LOW) {
      
      // Incrementamos la variable x para cambiar de estado
      x += 1;
      
      // Si x llega a 16 (equivale a 10000 en binario), se reinicia a 0
      if (x == 16) {
        x = 0;
      }

      // Cambiamos el estado de los LEDs según el valor de x
      switch (x) {
        case 0:
          digitalWrite(6, HIGH);   // Apaga LED en pin 6 (bit 0)
          digitalWrite(9, HIGH);   // Apaga LED en pin 9 (bit 1)
          digitalWrite(10, HIGH);  // Apaga LED en pin 10 (bit 2)
          digitalWrite(11, HIGH);  // Apaga LED en pin 11 (bit 3)
          break;
        
        case 1:
          digitalWrite(6, LOW);    // Enciende LED en pin 6 (bit 0)
          digitalWrite(9, HIGH);   // Apaga LED en pin 9 (bit 1)
          digitalWrite(10, HIGH);  // Apaga LED en pin 10 (bit 2)
          digitalWrite(11, HIGH);  // Apaga LED en pin 11 (bit 3)
          break;

        case 2:
          digitalWrite(6, HIGH);   // Apaga LED en pin 6 (bit 0)
          digitalWrite(9, LOW);    // Enciende LED en pin 9 (bit 1)
          digitalWrite(10, HIGH);  // Apaga LED en pin 10 (bit 2)
          digitalWrite(11, HIGH);  // Apaga LED en pin 11 (bit 3)
          break;

        case 3:
          digitalWrite(6, LOW);    // Enciende LED en pin 6 (bit 0)
          digitalWrite(9, LOW);    // Enciende LED en pin 9 (bit 1)
          digitalWrite(10, HIGH);  // Apaga LED en pin 10 (bit 2)
          digitalWrite(11, HIGH);  // Apaga LED en pin 11 (bit 3)
          break;
          
        case 4:
          digitalWrite(6, HIGH);   // Apaga LED en pin 6 (bit 0)
          digitalWrite(9, HIGH);   // Apaga LED en pin 9 (bit 1)
          digitalWrite(10, LOW);   // Enciende LED en pin 10 (bit 2)
          digitalWrite(11, HIGH);  // Apaga LED en pin 11 (bit 3)
          break;

        case 5:
          digitalWrite(6, LOW);    // Enciende LED en pin 6 (bit 0)
          digitalWrite(9, HIGH);   // Apaga LED en pin 9 (bit 1)
          digitalWrite(10, LOW);   // Enciende LED en pin 10 (bit 2)
          digitalWrite(11, HIGH);  // Apaga LED en pin 11 (bit 3)
          break;

        case 6:
          digitalWrite(6, HIGH);   // Apaga LED en pin 6 (bit 0)
          digitalWrite(9, LOW);    // Enciende LED en pin 9 (bit 1)
          digitalWrite(10, LOW);   // Enciende LED en pin 10 (bit 2)
          digitalWrite(11, HIGH);  // Apaga LED en pin 11 (bit 3)
          break;

        case 7:
          digitalWrite(6, LOW);    // Enciende LED en pin 6 (bit 0)
          digitalWrite(9, LOW);    // Enciende LED en pin 9 (bit 1)
          digitalWrite(10, LOW);   // Enciende LED en pin 10 (bit 2)
          digitalWrite(11, HIGH);  // Apaga LED en pin 11 (bit 3)
          break;

        case 8:
          digitalWrite(6, HIGH);   // Apaga LED en pin 6 (bit 0)
          digitalWrite(9, HIGH);   // Apaga LED en pin 9 (bit 1)
          digitalWrite(10, HIGH);  // Apaga LED en pin 10 (bit 2)
          digitalWrite(11, LOW);   // Enciende LED en pin 11 (bit 3)
          break;

        case 9:
          digitalWrite(6, LOW);    // Enciende LED en pin 6 (bit 0)
          digitalWrite(9, HIGH);   // Apaga LED en pin 9 (bit 1)
          digitalWrite(10, HIGH);  // Apaga LED en pin 10 (bit 2)
          digitalWrite(11, LOW);   // Enciende LED en pin 11 (bit 3)
          break;

        case 10:
          digitalWrite(6, HIGH);   // Apaga LED en pin 6 (bit 0)
          digitalWrite(9, LOW);    // Enciende LED en pin 9 (bit 1)
          digitalWrite(10, HIGH);  // Apaga LED en pin 10 (bit 2)
          digitalWrite(11, LOW);   // Enciende LED en pin 11 (bit 3)
          break;

        case 11:
          digitalWrite(6, LOW);    // Enciende LED en pin 6 (bit 0)
          digitalWrite(9, LOW);    // Enciende LED en pin 9 (bit 1)
          digitalWrite(10, HIGH);  // Apaga LED en pin 10 (bit 2)
          digitalWrite(11, LOW);   // Enciende LED en pin 11 (bit 3)
          break;

        case 12:
          digitalWrite(6, HIGH);   // Apaga LED en pin 6 (bit 0)
          digitalWrite(9, HIGH);   // Apaga LED en pin 9 (bit 1)
          digitalWrite(10, LOW);   // Enciende LED en pin 10 (bit 2)
          digitalWrite(11, LOW);   // Enciende LED en pin 11 (bit 3)
          break;

        case 13:
          digitalWrite(6, LOW);    // Enciende LED en pin 6 (bit 0)
          digitalWrite(9, HIGH);   // Apaga LED en pin 9 (bit 1)
          digitalWrite(10, LOW);   // Enciende LED en pin 10 (bit 2)
          digitalWrite(11, LOW);   // Enciende LED en pin 11 (bit 3)
          break;

        case 14:
          digitalWrite(6, HIGH);   // Apaga LED en pin 6 (bit 0)
          digitalWrite(9, LOW);    // Enciende LED en pin 9 (bit 1)
          digitalWrite(10, LOW);   // Enciende LED en pin 10 (bit 2)
          digitalWrite(11, LOW);   // Enciende LED en pin 11 (bit 3)
          break;

        case 15:
          digitalWrite(6, LOW);    // Enciende LED en pin 6 (bit 0)
          digitalWrite(9, LOW);    // Enciende LED en pin 9 (bit 1)
          digitalWrite(10, LOW);   // Enciende LED en pin 10 (bit 2)
          digitalWrite(11, LOW);   // Enciende LED en pin 11 (bit 3)
          break;
        
      }
    }
  }
}
