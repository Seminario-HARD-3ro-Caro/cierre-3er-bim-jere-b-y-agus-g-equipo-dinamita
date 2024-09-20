void setup() {
  // Declaramos el pin 2 como entrada (pulsador)
  pinMode(2, INPUT);
  
  // Declaramos los pines 6, 9, 10 y 11 como salida (para los LEDs)
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // Cuando se toque el botón (estado HIGH), encendemos los LEDs
  if (digitalRead(2) == HIGH) {
    digitalWrite(6, LOW);  // Encender LED en el pin 6
    digitalWrite(9, LOW);  // Encender LED en el pin 9
    digitalWrite(10, LOW); // Encender LED en el pin 10
    digitalWrite(11, LOW); // Encender LED en el pin 11
  } else {
    // Si no está presionado el botón, apagamos los LEDs
    digitalWrite(6, HIGH);   // Apagar LED en el pin 6
    digitalWrite(9, HIGH);   // Apagar LED en el pin 9
    digitalWrite(10, HIGH);  // Apagar LED en el pin 10
    digitalWrite(11, HIGH );  // Apagar LED en el pin 11
  }
}
