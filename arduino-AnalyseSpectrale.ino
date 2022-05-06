int sensor1 = A0 ;
int sensor2 = A1 ;

void setup(){
  // placez votre code d'installation ici, à exécuter une fois :
  Serial.begin(9600);
  pinMode (sensor1, INPUT);
  pinMode (sensor2, INPUT);
}

//globals
float data1; 
int data2; //store data from both sensors
int freq = 10; //data collection frequency ~x milliseconds
int curr1; 
int curr2;
float percent = 0.05;
int threshold = 1024*percent;
String dataLabel1 = "A1";
String dataLabel2 = "Photoresistor";
bool label = true;

void loop(){
      //print out column headers
    while(label){ //runs once
        Serial.println(dataLabel1);
       // Serial.print(",");
       // Serial.println(dataLabel2);
        label=false;
  }

    
    data1 = ((data2*3.3)/1023);
    data2 = analogRead(sensor1);

     
      //Display Data to Serial Monitor
      Serial.println(data1);
      //Serial.print(",");
      //Serial.println(data2);


        //set the current equal to the data
      curr1 = data1;
      curr2 = data2;
  
  
      delay(freq);
    
}
