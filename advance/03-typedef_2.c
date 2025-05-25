#include <stdio.h>

// Primitive aliases
typedef int Integer;
typedef float Decimal;
typedef char Character;

// Real-world type abstraction
typedef int Age;
typedef Decimal Temperature;
typedef Decimal Voltage;
typedef Decimal SensorReading;

// Struct to represent a robotic arm sensor
typedef struct {
    Temperature temp_sensor;
    Voltage battery_level;
    SensorReading position;
} ArmStatus;

int main() {
    Age operator_age = 18;
    Character symbol = '$';
    const Decimal pi = 3.14159;

    ArmStatus arm = {36.6, 7.4, 122.5};

    printf("Operator Age: %d\n", operator_age);
    printf("Symbol: %c\n", symbol);
    printf("Robotic Arm Temp: %.2f°C\n", arm.temp_sensor);
    printf("Battery: %.2fV\n", arm.battery_level);
    printf("Arm Position: %.2f\n", arm.position);
}
