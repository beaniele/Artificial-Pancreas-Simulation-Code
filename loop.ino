void loop() {

  conductivity = analogRead(A0); //conductivity's central read will come from the A0 pin on the Arduino Uno R4 Minima (utilized board)

  Serial.println(conductivity); //communicates with serial monitor that conductivity units that were named in the variable file are to be displayed

  if(conductivity > threshold) {

    analogWrite(pumpPin, pumpSpeed); //condition where the pump should be turned on if the threshold has yet to be reached
  }
  else {

    analogWrite(pumpPin, LOW); //condition where the pump is to be turned off or stay idle if the threshold has been reached.
  }
}

//note this code has been tweaked numerous times to ensure that the model's function is successful.
