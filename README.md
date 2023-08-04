# DCMotor_Encoder
Task 4 of the Electrical Engineering path

### Requirements
* Arduino Uno
* DC Motor with Encoder
* H-bridge Motor Driver
* Wires
  
  ![Screenshot (430)](https://github.com/iidabawaj/DCMotor_Encoder/assets/139181626/eb1c1202-466d-4b8f-8add-7b52b335c511)


### Circuit
Use only one of the two channels of the L293D driver as there is only one motor to be controlled.
The Arduino pins involved in motor control are 5 and 6, both PWM.
The encoder must be connected to pins 2 and 3, which by default for Arduino Uno are of the interrupts type, i.e. they can read the signals coming from an encoder, or other digital signal, independently of the loop().

### Code
* the first two lines define the pins with which you can control the rotation of the dc motor using the L293D;

* line 05: sets the serial communication;

* lines 06-07: set pins 5 and 6 as OUTPUT;

* line 11: sets the output on pin 5 to 127 so that the rotation speed is 50% of the maximum motor speed. This speed, in the simulation, will correspond to 3rpm;

* line 12: set to 0 ( LOW ) the output value on pin 6 to set the clockwise rotation.

After verifying that the motor runs smoothly with these settings, it switches to reading the encoder.


  

  
