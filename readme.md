# Arduino
Studying how to control led, buzzer, illuminator sensor, lcd, button, or other simple applicable IoT devices using Serial Communication, programmed by C++ in an Arduino sketch IDE.

Used Boards:
- MEGA 2560 with 115200 baud rate
- ESP8266 NodeMCU
- Uno R3

<br>

Reference: [Arduino.cc](https://www.arduino.cc/reference)

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



## ESP8266 - NodeMCU (WiFi Module)

Reference: [1](http://www.martyncurrey.com/esp8266-and-the-arduino-ide/), [2](https://iotbytes.wordpress.com/nodemcu-pinout/), [3](http://www.dreamy.pe.kr/zbxe/CodeClip/3768899), [4](https://www.electronicwings.com/nodemcu/nodemcu-gpio-with-arduino-ide), [5](https://louie0724.tistory.com/219)
<br>

- built in TCP/IP protocol stack -> multiple TC Client connections
- D0-D8, SD1-SD3: GPIO, PWM, IIC

<br>

### Pin Map 
<img src="https://pradeepsinghblog.files.wordpress.com/2016/04/nodemcu_pins.png?w=533&zoom=2" width=300></img>

<br>


### WiFi Functions References

Reference: [Arduino.cc](https://www.arduino.cc/en/Reference/WiFi)

_**WiFi.begin(ssid, pw)**_
> Initializes the WiFi library's network settings and provides the current status.
> (name of the WiFi network, a security code pw)

```c++
char *ssid="iptime"; // char ssid[] = "iptime";
char *pw="password"; // char pw[]="password";

void setup(){
    WiFi.begin(ssid, pw);
}
void loop() {}
```

_**WiFiServer()**_
> creates a server 

_**WiFi.localIP();**_
> Gets the WiFi shield's IP address

_**WiFi.status()**_
> Return the connection status
> return value:
> - WL_CONNECTED: connected to a WiFi network
> - WL_DISCONNECTED
> - WL_NO_SHIED: no WiFi shiled is present
> - WL_SCAN_COMPLETED: scan networks is completed

```c++
while ( WiFi.status() != WL_CONNECTED){
    Serial.print("Attempting to connect to WEP network, SSID: ");
    Serial.println(ssid);
}
```

_**WiFiClient()**_
> Creates a client that can connect to a specified Internet IP address and port as a defined in a client.connect()

_**client.connect(ip, port);  client.connect*URL, port);**_
> connect to the IP address and port specified in the constructor. 
> return value: success/failure

```c++
char *servername="google.com";
WiFiClient client;

void setup(){
    ...
    if(client.connect(servername, 80)){
        Serial.println("connected");
        ...
    }
```

