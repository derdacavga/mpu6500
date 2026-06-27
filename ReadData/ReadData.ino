#include <Wire.h>
#include "MPU6500.h"

MPU6500 imu;

void setup() {
  Serial.begin(115200);
  
  imu.begin();
}

void loop() {
  imu.readSensor();

  Serial.print("Accel X: "); Serial.print(imu.getAccelX());
  Serial.print(" | Accel Y: "); Serial.print(imu.getAccelY());
  Serial.print(" | Accel Z: "); Serial.print(imu.getAccelZ());
  Serial.print(" | Gyro X: "); Serial.print(imu.getGyroX());
  Serial.print(" | Gyro Y: "); Serial.print(imu.getGyroY());
  Serial.print(" | Gyro Z: "); Serial.print(imu.getGyroZ());
  Serial.println();

  delay(500);
}
