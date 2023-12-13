#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  if (!mpu.begin()) {
    Serial.println("Failed to initialize MPU6050!");
    while (1);
  }

  mpu.setAccelerometerRange(MPU6050_RANGE_16G);
  mpu.setGyroRange(MPU6050_RANGE_250DEG);
}

void loop() {
  // Read raw accelerometer and gyroscope values
  int16_t ax, ay, az, gx, gy, gz;
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  // Convert raw values to degrees per second
  float gx_deg_per_sec = gx / 131.0;
  float gy_deg_per_sec = gy / 131.0;
  float gz_deg_per_sec = gz / 131.0;

  // Print the values to the Serial Monitor
  Serial.print("Gyro X: ");
  Serial.print(gx_deg_per_sec);
  Serial.print(" degrees per second\t");

  Serial.print("Gyro Y: ");
  Serial.print(gy_deg_per_sec);
  Serial.print(" degrees per second\t");

  Serial.print("Gyro Z: ");
  Serial.print(gz_deg_per_sec);
  Serial.println(" degrees per second");

  delay(1000); // Adjust the delay as needed
}
