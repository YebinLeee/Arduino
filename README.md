# Arduino
Studying how to control led, buzzer, illuminator sensor, lcd, button, etc... using Serial Communication, programmed by C++ in an Arduino sketch IDE.

<br>
Reference: [Arduino.cc](https://www.arduino.cc)
<hr>

## Basic Structures - setup(), loop()

_**setup()**_

> called when a sketch starts. Use it to initialize variables, pin modes, start using libraries, etc. The setup() function will only run once, after each powerup or reset of the Arduino board.


_**loop()**_

> loops consecutively

```cpp
void setup() {
}
void loop() {
}
```
<br>

## Functions References


### DIgital I/O

**_pinMode(pin, mode)_**

> Configures the specified pin to behave either as an input or an output. See the Digital Pins page for details on the functionality of the pins.
mode: INPUT, OUTPUT

**_digitalRead(pin)_**

> Reads the value from a specified digital pin, either HIGH or LOW.

**_digitalWrite(pin, value)_**

> Write a HIGH or a LOW value to a digital pin. (Make a led pin ON or OFF.)

<br>

### Analog I/O (Using Serial network)

**_analogRead(pin)_**

> Reads the value from the specified analog pin. Arduino boards contain a multichannel, 10-bit analog to digital converter. This means that it will map input voltages between 0 and the operating voltage(5V or 3.3V) into integer values between 0 and 1023.

BOARD | OPERATING VOLTAGE | USABLE PINS | MAX RESOLUTION
-- | -- | -- | --
Uno | 5 Volts | A0 to A5 | 10 bits
Mini, Nano | 5 Volts | A0 to A7 | 10 bits
Mega, Mega2560, MegaADK | 5 Volts | A0 to A14 | 10 bits


**_analogWrite(pin, value)_**

> Writes an analog value (PWM wave) to a pin. Can be used to light a LED at varying brightnesses or drive a motor at various speeds.

<br>

### Time

**_delay(miliseconds)_**

> Pauses the program for the amount of time (in milliseconds) specified as parameter. (There are 1000 milliseconds in a second.)

<br>

### Advanced I/O

_**tone(pin, frequency, duration)**_

> Generates a square wave of the specified frequency (and 50% duty cycle) on a buzzer pin. 


_**noTone(pin)**_

> stops the generation of a square wave triggered by tone(). Has no effect if no tone is being generated.

<br><br>

## **Serial**
> Used` for communication between the Arduino board and a computer or other devices. Use the Arduino environment’s built-in serial monitor to communicate with an Arduino board
<br>

### Serial Communication Functions References

_**Serial.available()**_
> Get the number of bytes (characters) available for reading from the serial port. This is data that’s already arrived and stored in the serial receive buffer (which holds 64 bytes).

_**Serial.begin(baud rates)**_
> Sets the data rate in bits per second (baud) for serial data transmission. 

_**Serial.print()**_ , _**Serial.println()**_
> Prints data to the serial port as human-readable ASCII text.
ex) Serial.print(78); Serial.println("Hello world");

_**Serial.read()**_
> Reads incoming serial data.

_**Serial.write()**_
> Writes binary data to the serial port.

<br>

## LCD(LiquidCrystal Display) control library

#include <LiquidCrystal.h>
> LCD_IC2 : A library to control a 16x2 LCD via an I2C adapter based on PCF8574.
> <wire.h> IC2 communication

<br>

### LCD functions references

**_lcd.begin(rows, cols)_**

> Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display

**_lcd.print(data)_**

> print the data

**_lcd.clear()_**

> delete the previous data


**_setCursor()_**

> reposition the cursor
[reference](https://www.arduino.cc/en/Tutorial/LibraryExamples/LiquidCrystalSetCursor)

_for a 2x16 display:_

- lcd.setCursor(0, 0); // top left
- lcd.setCursor(15, 0); // top right
- lcd.setCursor(0, 1); // bottom left
- lcd.setCursor(15, 1); // bottom right

<br>

### circuit schema
[reference](https://www.arduino.cc/en/Tutorial/LibraryExamples/HelloWorld)
<img src="https://user-images.githubusercontent.com/71310074/108723071-31a65e00-7567-11eb-9125-c4d5c9bad616.png" width="400"></img>
<br><hr><br>
