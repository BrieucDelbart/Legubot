#include <DHT.h>
#include <TimerOne.h>

//Constants
#define DHTPIN 6
#define DHTTYPE DHT22
#define humidityMax 670
#define moistureSensor 0

//Variables
float humidityGreenHouse;  //Stores humidity value in the green house
float temperatureGreenHouse;  //Stores temperature value in the green house
int humidityGround; //Stores the humidity of the ground
DHT dht(DHTPIN, DHTTYPE);

//Function declarations
void dataAcquisition (void);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Timer1.initialize(60000000); // set a timer of length 60000000 microseconds (1 min) 
  Timer1.attachInterrupt( timerIsr ); // attach the service routine here
}

void loop() {
  
//Print the values read:
//  Serial.print("Humidity green house: ");
//  Serial.print(humidityGreenHouse);
//  Serial.print(" %, Temperature green house: ");
//  Serial.print(temperatureGreenHouse);
//  Serial.print(" Celsius,");
//  Serial.print(" Humidity ground: ");
//  Serial.print(humidityGround);
//  Serial.println(" %");
//  delay(1000);        // delay 1 second between reads
}

void dataAcquisition (void)
{
  //Read data and store into variables
  humidityGreenHouse = dht.readHumidity();
  temperatureGreenHouse = dht.readTemperature();
  
  //Read the input on analog pin 0:
  long sensorValue = analogRead(moistureSensor);
  humidityGround = 100 - ( (100 * sensorValue) / humidityMax );
}

void timerIsr()
{
    dataAcquisition();
}
