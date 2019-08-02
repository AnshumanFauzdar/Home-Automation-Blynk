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
![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/Schematic.JPG)

Basic connection follow as:
![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/Circuit1.JPG)

![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/Circuit2.JPG)

I have installed this circuit in a box:
![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/CircuitBox1.JPG)

![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/CircuitBox2.JPG)



# Errors and tricks

In schematic this is clear if there is no internet connection through wifi, then your main connection will be on/off according to your connection
Now you can overcome this problem by double way switch, or just simply trip your MCB and wait for internet connection to back in working state, until then use your old connection as main.

If you have installed your cicrcuit in a box, then you may face heating issue which can be solved by adding a small fan, I have used 12v 3" Fan to beat the heat issue.

# Conclusion

This is very DIY project and can help in controlling your home even when you are far away from home
You can add as many connections as much your controller allows!
If you want to control only in local wifi, then I also have web server code lemme know I will upload that also

If you are facing any problem in connections or flashing any code, feel free to mail me (fauzdaranshuman@gmail.com)

# Working Video

[![alt text](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/Working.gif)](https://github.com/AnshumanFauzdar/Home-Automation-Blynk/blob/master/Working%20video.MOV)

# Dashboard Version

## Initial Idea:

Around 30 minutes before the time that you wake up in the morning, your thermostat sets itself to a wake-up temperature in your room an the rooms you will move through, your water heater ramps up from an overnight temperature of 150°F to 185°F. about 10 minutes before you wake up, your hot water recirculation system ensures that all of the cold water in the building's lines has been rotated back to the water heater, and your coffee maker starts.  At the time your alarm goes off, your whole house audio system slowly ramps up to a gentle ambient volume and your lights ramp up over 5 minutes.  When you get out of bed, your home's motion sensors detect that you've gotten out of bed and cancels the alarm, while turning on the light to your bathroom and closet.  As you walk to the shower, the water begins running and sets to your prefered temperature, and the moisture ventilation fan ramps to high.  As you step into the shower, your whole house audio system starts reading you your overnight emails, and gives you a brief on your early morning tasks and any big schedule items on your plate for the day.  As you step out of the shower the water turns itself off, and the ventilation fan slowly ramps down tracking the ambient humidity.  As you get dressed and situated, your smart mirror shows you the traffic for the route you're expecting to take to work, and the weather for the day.  As you leave the bathroom, the lights turn themselves off and the light to the hallway and the kitchen turn on (based on your routine).  Your coffee is ready to take from the coffee maker and your music gently fills only the room you are in to prevent bothering your family.  As you finish your breakfast and put your dishes away, your refrigerator takes inventory of what you consumed and uploads it into your health tracker.  To keep you on schedule, you are reminded by your TTS assistant of the major items you need to bring with you as you leave, if your phone's bluetooth is detected in a room where you are not located, it will remind you to grab your phone.  As you head to the door (or a bit before on colder days), your car's remote start fires up the car, disarms the front door and unlocks it.  The house sees your bluetooth phone address exit through the front door when the door contact opens and closes, then sees your bluetooth phone address enter your car.  Your route to your first appointment of the day is automatically uploaded by your assistant into your car's navigation system, and your music playlist or channel continues where it left off as you left the house.  Your kitchen lights turn off, and your home phone forwards your calls to your cell phone.  As you pull out of your driveway the front door re-locks and the home/armed mode is set back to your alarm system to protect your family.

Later as the last person leaves your home, the system ensures your windows are closed and the blinds drawn, locks the doors, sets the away mode for your alarm system, and changes the setpoint of your thermostat to reflect the home is unoccupied, but keeps track of humidity and air changes to avoid wear and tear on your home's structure and your possessions, and keep VOCs down.  Your water heater is allowed to coast down to a lower temperature to save energy.  Your WiFi is shut off so that it's not an attractive nuisance, and all of the phone ringers are muted so that a caller can't hear the phone not being picked up (all calls are routed to your mobile anyway). As anyone approaches your home who is not your family, the CCTV cameras on the outside will recognize that the person is a mailman, delivery driver, or some other authorized presence (like a utility meter reader) - based on pattern recognition of the person's movements and direction of travel on the property.  If the person  begins looking in windows or trying doors, the video feed is sent to your alarm company for visual verification, and if needed they contact you and dispatch the necessary officials.  As everyone is out of the house, roombas (vacuums and mops) are going around cleaning everything

As dusk sets in, your home's exterior security (landscaping) lights slowly ramp up to maintain a minimum illumination for your CCTV cameras and your neighbors to be able to see around your property.

As your day comes to a close, you get in your car, and your home is notified that you are on the way back based on your patterns.  Your ETA is tracked and your home gauges home much time is needed to bring the home back up to occupied environmental conditions.  Your water heater ramps up, hot water is circulated, and the HVAC system brings the temperature back up or down to an efficient point based on outdoor reset.  As your car is detected pulling into your driveway, your exterior lights come up to a welcome mode.  As you exit your vehicle, the alarm system changes only the front door to disarmed, unlocks the door, and turns on your entry lights.  As you walk through the front door, your home announces a status of the exterior and room motion detectors "Yard and rooms all clear, would you care to disarm the home?"  You reply "Yes" and it sets the security system to off, and your phone calls are routed to your home phone so that you can put your phone on the charger and leave it alone.  As you walk towards each room the lights ramp up and your music follows you, with the lights and music slowly dimming out as you leave each room.  As the rest of your family heads home, your assistant gives and ETA so that you can prepare a dinner.  Based on what your system's inventory of your food knows you have, it makes a recommendation on what to make in the time allotted - you make a selection verbally.  As you walk into the kitchen to make dinner, your over preheats to the correct temperature for the recipe you've selected and the recipe is displayed on the counter where you will prepare your food.  As you measure out each ingredient needed, the assistant listens and checks off each ingredient, and highlights your next steps.  As you finish the preparation, the system detects that you've opened the oven, and that you've inserted a dish with the weight of the recipe, and as your close the oven door, the system announces it has begun the timer for you.  As the rest of your family get home their phone calls are routed to the home phones.  You get to talk with your wife and family as they do their homework and make plans for the rest of the week.  Your system tells you when it's time to set the table, so that when you are finished, the cooking will be done and it'll be ready to plate.  As you sit down to dinner, the system inventories that the phones are on their charging cradles in their respective owner's rooms, and the home phone is put into screening mode, while the WiFi is throttled or turned off.  As you finish eating, the hot water is again circulated so that it's ready for cleanup.  As your children's bedtimes approach, their rooms are warmed up to promote sleep, and over >15 minutes the color temperature of your lights shift to a warmer white.  As your children get into bed, the temperature in their rooms begins a slow hour-long ramp to a lower temperature.  As you shuffle off to your room for the evening, the exterior doors are again locked, the blinds are drawn closed, and the alarm sets itself to a home/armed.  The lights in the unoccupied rooms fade to off, and the nightlights to the floor gently illuminate the major walkways.  Your closet and bathroom lights ramp up so that you can get ready for bed, you are asked by your assistant if there are any last minute reminders you need to set which you do verbally and verify on your smart mirror.  As you walk into your room from the bathroom, the bathroom lights fade to off, and the water heater settles in for the night.  As you get into bed, the lights slowly dim and become more yellow, targeting an "off-time" of at least 8 hours before your next wake alarm is set.  Your home phones is set to screening mode again, with automatic ring-through if it's a family or know urgent number, your WiFi is again throttled or turned off to encourage kids to sleep.  You fall asleep, having not had to touch a single remote control or push a button on or look at the status of a wall controller all day, and everything operated as if your home "knew you like an old friend".  As you sleep, roombas quietly go around the rooms with high foot traffic from when you and your family were awake to prepare for another busy day.



