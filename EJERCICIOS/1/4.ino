int x = 0; // Variable para almacenar el número ingresado

void setup() {
  // Declaramos los pines como salida para los LEDs
  pinMode(11, OUTPUT);  // LED para el bit 3
  pinMode(10, OUTPUT);  // LED para el bit 2
  pinMode(9, OUTPUT);   // LED para el bit 1
  pinMode(6, OUTPUT);   // LED para el bit 0
  
  // Iniciamos la comunicación serie
  Serial.begin(9600);
  Serial.println("Ingrese un número entre 0 y 15:");
}

void loop() {
  // Verificamos si hay datos disponibles en el monitor serie
  if (Serial.available() > 0) {
    // Leemos el número ingresado
    x = Serial.parseInt();

    // Verificamos si el número está dentro del rango permitido
    if (x < 0 || x > 15) {
      Serial.println("Error: El número debe estar entre 0 y 15.");
    } else {
      // Mostramos el número en binario usando los LEDs
      displayBinary(x);
    }

    // Limpiamos el buffer de entrada
    Serial.readStringUntil('\n'); // Limpiamos hasta el final de la línea
  }
}

void displayBinary(int num) {
  // Configuramos el estado de los LEDs según el valor de num
  digitalWrite(6, (num & 1) ? LOW : HIGH);   // Bit 0
  digitalWrite(9, (num & 2) ? LOW : HIGH);   // Bit 1
  digitalWrite(10, (num & 4) ? LOW : HIGH);  // Bit 2
  digitalWrite(11, (num & 8) ? LOW : HIGH);  // Bit 3
}
