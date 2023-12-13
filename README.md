Description:
This project demonstrates the integration of a Gyro sensor (MPU6050) with a Raspberry Pi Pico microcontroller using the Arduino IDE. The Gyro sensor measures angular velocity along three axes (X, Y, and Z) and provides real-time data to the Raspberry Pi Pico. The collected data is then displayed on the Arduino IDE's Serial Monitor for monitoring and analysis.

Components:

Raspberry Pi Pico: The microcontroller board that serves as the brain of the project.
Gyro Sensor (MPU6050): A 6-degree-of-freedom (DOF) sensor capable of measuring acceleration and angular velocity.
Connecting Wires: Used to establish electrical connections between the Raspberry Pi Pico and the Gyro sensor.
Implementation Steps:

Wiring: Connect the SDA and SCL pins of the MPU6050 to the corresponding pins on the Raspberry Pi Pico.
Library Installation: Install the necessary libraries (Wire and MPU6050) through the Arduino IDE.
Code Setup: Write and upload the Arduino code to the Raspberry Pi Pico using the Arduino IDE. The code initializes communication with the Gyro sensor and reads angular velocity data from its X, Y, and Z axes.
Serial Monitor: Open the Arduino IDE Serial Monitor to observe the real-time gyroscope data, including degrees per second for each axis.
Project Benefits:

Learning Experience: Gain hands-on experience with I2C communication and sensor interfacing.
Sensor Data Monitoring: Monitor and analyze gyroscopic data for various applications such as robotics, motion tracking, and stabilization systems.
Versatility: The project can be expanded by incorporating additional sensors or integrating the Gyro data into other projects.
Note: Ensure that you have the required libraries installed in the Arduino IDE, and carefully follow the wiring instructions for a successful implementation of the project. The provided code serves as a foundation for further exploration and customization based on specific project requirements.
