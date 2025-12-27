void setup() {

  pinMode(pumpPin, OUTPUT); //pumpPin i.e. the pump being used for the model will be set as the output of said model that is what is being controlled throughout

  Serial.begin(9600); //initializing serial communication with the Serial Monitor that is accessible on Arduino IDE at a rate of 9600 baud.
                      //baud rate can be changed if needed or if a desired print rate is wanted instead of the defualt 9600 provided by the application

  Serial.println("Initialize Conductivity Output"); // "Initialize Conductivity Output" is printed to ensure that the Serial Monitor is able to communicate with the code and model
}

//noted that a delay feature can be implemented during the set up of the code to help slow down the rate of which the serial monitor is printing/displaying values, without needing to change the baud rate.
//example of such would be delay(500);, which will pause the execution of the code for half a millisecond.
