# GEO_Watering_System (GEOWS)
## Ανοιχτή τεχνολογία για οικονομική και δίκαιη διαχείριση του νερού - Green Equal Open Watering System (GEO Watering System)
<p>Το σύστημα αποσκοπεί στην δίκαιη κατανομή νερού για την κάλυψη αναγκών άρδευσης αγροτικών εκτάσεων, αστικών κήπων και άλλων αποδεκτών. Αποτελεί ένα οικονομικό και ανοιχτό σύστημα για την εξοικονόμηση νερού και για την πληροφόρηση των καλλιεργητών με στοιχεία που θα τους βοηθήσουν στο έργο τους.</p>
<p dir="auto">Πιο αναλυτικά η εργασία αποσκοπεί στο σχεδιασμό ενός ανοικτού τεχνολογικού συστήματος για τον έλεγχο μιας πηγής νερού και την κατανομή του αποθεματικού της με βάση τις πραγματικές ανάγκες του κάθε αποδέκτη. Το σύστημα θα λαμβάνει πληροφορίες σχετικά με την υγρασία, την θερμοκρασία, το είδος και την έκταση της καλλιέργειας κ.α. και θα αποφασίζει με έξυπνους αλγόριθμους για την ποσότητα του νερού που θα διαθέσει σε κάθε αρδευόμενη έκταση. Επιπλέον, με μία εφαρμογή κινητού τηλεφώνου θα υπάρχει αλληλεπίδραση με τον παραγωγό. Εκτός από το νερό το σύστημα θα μπορεί να επεκταθεί με  αισθητήρες για το Ph και άλλα συστατικά του εδάφους που θα είναι χρήσιμα για την λήψη καλλιεργητικών αποφάσεων. Αν δεν υπάρχουν αισθητήρες θα μπορούν να δοθούν κάποιες τιμές και μέσω της εφαρμογής.  Η ηλεκτρική ενέργεια των υποσυστημάτων θα παρέχεται με την χρήση φωτοβολταϊκών. Στο πρότυπο που θα κατασκευαστεί η πηγή νερού θα είναι ο ταμιευτήρας  βρόχινου νερού που θα μαζεύεται με τους σωλήνες υδρορροών.</p>
<p dir="auto"><img class="alignnone size-full wp-image-9245" src="https://openedtech.ellak.gr/wp-content/uploads/sites/31/2023/05/genikosxedio.png" alt="Γενική Περιγραφή Συστήματος" width="1021" height="317" /></p>

<h3>Ο εξοπλισμός που χρησιμοποιήσαμε είναι:</h3>
<ul>
 	<li>Arduino UNO R3 ATmega328P (30 Ευρώ)</li>
 	<li>Καλώδια, leds, κουμπιά, αντιστάσεις (5 Ευρώ)</li>
 	<li>2 Transistors, 2 diodes (5 Ευρώ)</li>
 	<li>Πλακέτες διασύνδεσης - Breadboard (5 Ευρώ)</li>
 	<li>20x4 2004 LCD Display Module Serial Interface (10 Ευρώ)</li>
 	<li>Wifi module (20 Ευρώ)</li>
 	<li>2 x oil Moisture Sensor and Hygrometer Module for Arduino (4 Ευρώ)</li>
 	<li>2 DN15 Solenoid Valve 20Ευρώ)</li>
 	<li>5V water pump (5 ευρώ)</li>
 	<li>5V solar panel 13 Ευρώ)</li>
 	<li>DFRobot Solar Power Manager 5V (12 Ευρώ)</li>
 	<li>Battery (14 ευρώ)</li>
</ul>
<p dir="auto">Συνολικό κόστος 143€</p>

<h3>Περιγραφή του συστήματος</h3>
<p dir="auto">Το σύστημα αποτελείται από 3 βασικά υποσυστήματα:</p>

<ul>
 	<li>Το υποσύστημα ελέγχου των αισθητήρων</li>
 	<li>Το υποσύστημα ποτίσματος</li>
 	<li>Το υποσύστημα επικοινωνίας</li>
</ul>
Τα παιδιά αναλάβανε μέσα στην ομάδα του παρακάτω ρόλους:
<ul>
 	<li>Προγραμματιστής</li>
 	<li>Σχεδιαστής</li>
 	<li>Μηχανικός - Υδραυλικός</li>
</ul>
<!--more-->

<!--more-->

<strong>Αναλυτική περιγραφή τμημάτων του συστήματος</strong>

Το υποσύστημα ποτίσματος περιλαμβάνει δύο ίδια κυκλώματα ελέγχου μια ηλεκτροβάνας (solenoid). Για την σύνδεση τους χρησιμοποιείται ένα τρανζίστορ που λειτουργεί σαν διακόπτης.  Αναγκαία είναι και η προσθήκη μιας διόδου για την προστασία από ρεύματα εξ απαγωγής που δημιουργούνται από τις ηλεκτροβάνες, αλλά και από κινητήρες γενικότερα, και μπορούν να καταστρέψουν τμήματα τους κυκλώματος. Αναλυτικές πληροφορίες υπάρχουν στην παρακάτω διεύθυνση.

https://bc-robotics.com/tutorials/controlling-a-solenoid-valve-with-arduino/

<img class="alignnone " src="https://bc-robotics.com/wp-content/uploads/2015/07/sketch1.jpg" width="308" height="277" />

Επίσης, χρήσιμες πληροφορίες υπάρχουν στην παρακάτω διεύθυνση

<a href="https://forum.arduino.cc/t/controlling-two-solenoids/578415/6">https://forum.arduino.cc/t/controlling-two-solenoids/578415/6</a>

Στο υποσύστημα ελέγχου των αισθητήρων περιλαμβάνει σε πρώτη φάση αισθητήρες SparkFun Υγρασίας Εδάφους. Αναλυτικές πληροφορίες για την σύνδεση τους υπάρχουν στην παρακάτω διεύθυνση.

<a href="https://theorycircuit.com/soil-moisture-sensor-arduino/"><img class="alignnone " src="https://theorycircuit.com/wp-content/uploads/2016/09/arduino-soil-moisture-sensor-hookup.png" width="332" height="159" /></a>

<a href="https://theorycircuit.com/soil-moisture-sensor-arduino/"><img class="alignnone size-full wp-image-10729" src="https://openedtech.ellak.gr/wp-content/uploads/sites/31/2023/05/geows_bd.jpg" alt="" width="603" height="605" /></a>

<strong>Πιο αναλυτικά το κύκλωμα της εφαρμογής</strong>

<img class="alignnone size-full wp-image-10789" src="https://openedtech.ellak.gr/wp-content/uploads/sites/31/2023/05/Παρουσίαση1.jpg" alt="" width="960" height="720" />

<strong>Ο κώδικας της εφαρμογής,</strong> Χρησιμοποιήθηκε η αντικειμενοστραφής σχεδίαση του προγράμματος:

'''
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
}

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
 }

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
}

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
'''

Το <strong>βίντεο</strong> παρουσίασης της λειτουργίας:


