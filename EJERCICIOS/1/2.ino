int x = 0; // Variable para llevar el seguimiento de los estados

void setup() {
  // Declaramos los pines como salida para los LEDs
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  
  // Declaramos el pin 2 como entrada para el botón
  pinMode(2, INPUT);
}

void loop() {
  // Si se presiona el botón
  if (digitalRead(2) == HIGH) {
    delay(50); // Añadimos un pequeño retardo para evitar rebotes
    
    // Si se detecta que el botón se ha soltado
    if (digitalRead(2) == LOW) {
      
      // Incrementamos la variable x para cambiar de estado
      x += 1;
      
      // Si x llega a 4, se reinicia a 0
      if (x == 4) {
        x = 0;
      }

      // Cambiamos el estado de los LEDs según el valor de x
      switch (x) {
        case 0:
          digitalWrite(6, LOW);   // Apaga LED en pin 6
          digitalWrite(9, HIGH);  // Enciende LED en pin 9
          digitalWrite(10, HIGH);  // Apaga LED en pin 10
          digitalWrite(11, HIGH);  // Apaga LED en pin 11
          break;

        case 1:
          digitalWrite(6, HIGH);   // Apaga LED en pin 6
          digitalWrite(9, LOW);   // Apaga LED en pin 9
          digitalWrite(10, HIGH); // Enciende LED en pin 10
          digitalWrite(11, HIGH);  // Apaga LED en pin 11
          break;

        case 2:
          digitalWrite(6, HIGH);   // Apaga LED en pin 6
          digitalWrite(9, HIGH);   // Apaga LED en pin 9
          digitalWrite(10, LOW);  // Apaga LED en pin 10
          digitalWrite(11, HIGH); // Enciende LED en pin 11
          break;
          
        case 3:
          digitalWrite(6, HIGH);  // Enciende LED en pin 6
          digitalWrite(9, HIGH);   // Apaga LED en pin 9
          digitalWrite(10, HIGH);  // Apaga LED en pin 10
          digitalWrite(11, LOW);  // Apaga LED en pin 11
          break;
      }
    }
  }
}
