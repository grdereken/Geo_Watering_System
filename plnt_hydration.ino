// Sensor pins
int sensorPower1 = 2;
int sensorPower2 = 3;
int sensorPin1 = A0;
int sensorPin2 = A1;
int solenoidSignal1 = 4;
int solenoidSignal2 = 5;
#define soilWet 750   
#define soilDry 250

class moistureSensor{
  private:
    int sensorPower;
    int sensorPin;
    void init(){
      pinMode(sensorPower, OUTPUT);
      off();
    }
  public:

    moistureSensor(int sensorPower, int sensorPin){
      this->sensorPower = sensorPower;
      this->sensorPin = sensorPin;
      init();
    }
    int readS(){
      on(); 
      delay(10);              
      int moistureLevel = analogRead(sensorPin);  
      off();   
      return moistureLevel;         
    }
    void off(){
      digitalWrite(sensorPower, LOW); 
    }
    void on(){
      digitalWrite(sensorPower, HIGH); 
    }

};
class Solenoid{
  private:
    int startTime;
    int finalTime;
    int SolenoidSignal;
    void init(){
      pinMode(SolenoidSignal, OUTPUT);
    }
  public:
    bool isOpen;
    Solenoid(int SolenoidSignal){
      this->SolenoidSignal = SolenoidSignal;
      init();
      Serial.println("Object initiated");
      
    } 
    void on(){
      isOpen = true;
      startTime = millis();
      digitalWrite(SolenoidSignal, HIGH); 
    }
    void off(){
      isOpen = false;
      finalTime = millis();
      digitalWrite(SolenoidSignal, LOW); 
    }
    int getOpenTime(){
      return finalTime - startTime;
    }
 };

class Plant{
  private:
    int solenoidSignal;
    int sensorPower;
    int sensorPin;
    String plantName;
    Solenoid* solenoid;
    moistureSensor* sensor;
    void init(){
      this->solenoid = new Solenoid(solenoidSignal);
      this->sensor = new moistureSensor(sensorPower, sensorPin);
     }
  public:
 
    Plant(String plantName, int solenoidSignal, int sensorPower, int sensorPin){
      this->solenoidSignal = solenoidSignal;
      this->sensorPower = sensorPower;
      this->sensorPin = sensorPin;
      this->plantName = plantName;
      init();
     }
     
     bool isIrrigated(){
      int moistureLevel = sensor->readS();
      if(moistureLevel < soilDry){
        return false;
      }
      return true;
     }
    void main(){
      if(!isIrrigated() & !solenoid->isOpen){
        Serial.println("------------------------");
        Serial.print(plantName);
        Serial.println(':');
        Serial.println("Solenoid is open");
        Serial.println("------------------------");
        solenoid->on();
      }
      if(solenoid->isOpen){
        Serial.print("Watering: ");
        Serial.println(plantName);
      }   
      if(isIrrigated() && solenoid->isOpen){
        solenoid->off();
        int SolenoidOpenTime = solenoid->getOpenTime();
        Serial.println("------------------------");
        Serial.print(plantName);
        Serial.println(':');
        Serial.println("Solenoid is closed");
        Serial.print(SolenoidOpenTime/1000);
        Serial.println(" Seconds passed");
        Serial.print(SolenoidOpenTime/60000.0);
        Serial.println(" minutes passed");
        Serial.println("------------------------");
      }
    }
};


Plant plant1("Plant1", solenoidSignal1, sensorPower1, sensorPin1);
Plant plant2("Plant2", solenoidSignal2, sensorPower2, sensorPin2);
void setup() {
  Serial.begin(9600);
}

void loop() {
  plant1.main();
  plant2.main();
  delay(2000);
}





