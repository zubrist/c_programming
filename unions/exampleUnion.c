#include<stdio.h>


union Sensordata{
    int temperature;
    float pressure;
};



struct Sensor{
    int type; // 0 for temperature, 1 for pressure
    union Sensordata data;

};


int main(){

  struct Sensor mySensor;

 mySensor.type = 0; // Setting type to temperature
 mySensor.data.temperature = 25; // Setting temperature data
 printf("Temperature: %d\n", mySensor.data.temperature);


 mySensor.type = 1; // Changing type to pressure
 mySensor.data.pressure = 101.5; // Setting pressure data
 printf("Pressure: %.2f\n", mySensor.data.pressure);


    return 0;
}