# DCMotor_Encoder
Task 4 of the Electrical Engineering path

### Requirements
* Arduino Uno
* DC Motor with Encoder
* H-bridge Motor Driver
* Wires
  
  ![Screenshot (430)](https://github.com/iidabawaj/DCMotor_Encoder/assets/139181626/eb1c1202-466d-4b8f-8add-7b52b335c511)


## Circuit
Use only one of the two channels of the L293D driver as there is only one motor to be controlled.
The Arduino pins involved in motor control are 5 and 6, both PWM.
The encoder must be connected to pins 2 and 3, which by default for Arduino Uno are of the interrupts type, i.e. they can read the signals coming from an encoder, or other digital signal, independently of the loop().

  

  
