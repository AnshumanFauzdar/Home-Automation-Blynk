# Home Automation 

Want to control your house lights or add some automation functionality then you can easily use ESP8266 and Blynk app which is easy to use and hence can be easily installed by anyone as DIY project. 

# Parts Required

Lets get started what we will need for this automation:
1. NodeMCU (I have purchased from banggood.in), you can use any other board which gives wifi functionality like wemos
2. Mobile Phone (To control blynk app)
3. 5v Relay (I have 2 channel relay - You can use any number of relay upto which your board can give output)
4. 3.3v - 5v Breadboard powersupply (I have used this one - https://www.flipkart.com/epro-labs-breadboard-power-supply-module-3-3v-5v/p/itmeggsdz7jfygtm?pid=ETYEGGSDTHGKYYQU&lid=LSTETYEGGSDTHGKYYQUIGNA97 )
5. 12v powersupply (Any 12v prefered more than 1A like LED Strip Driver)
6. Connecting wires, jumper wires, heat shrinks, screwdrivers and blah blah (Basic tools that are required for any project)

# Flashing ESP8266 with blynk code

Prepare your Arduino IDE according to ESP8266 boards, detailed installation instructions - "http://esp8266.github.io/Arduino/versions/2.0.0/doc/installing.html"

Flash "https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/Arduino-ESP8266.ino" by editing out authentication code, Wifi SSID, password and then uploading the code 

Detailed Blynk Tutorials - "https://www.youtube.com/channel/UCKWBP3MdpMQFdOCQ63mhC_Q"

# Preparing Your Circuit 

Keep everyting handy and follow the schematic diagram as shown below

You can edit out output pins in blynk as we are virtually writing data on blynk

Schematic is as follow

Basic connection follow as:
![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/Circuit1.JPG)

![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/Circuit2.JPG)

I have installed this circuit in a box:
![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/CircuitBox1.JPG)

![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/CircuitBox2.JPG)



# Errors and tricks

In schematic this is clear if there is no internet connection through wifi, then your main connection will be on/off according to your connection
Now you can overcome this problem by double way switch, or just simply trip your MCB and wait for internet connection to back in working state, until then use your old connection as main.

# Conclusion

This is very DIY project and can help in controlling your home even when you are far away from home
You can add as many connections as much your controller allows!
If you want to control only in local wifi, then I also have web server code lemme know I will upload that also

If you are facing any problem in connections or flashing any code, feel free to mail me (fauzdaranshuman@gmail.com)

# Working Video

![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/Working%20video.MOV)
