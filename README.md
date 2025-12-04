# CODE RED Controller and Sensor Portfolio 

This project documents my work as the developer of firetruck-themed controllers for the **CODE RED** video game interactive experience. I created 4 controllers and 4 stations. Each controller is a fully custom wooden firetruck that I wired, soldered, and integrated with embedded joysticks and buttons. Each station was wired, soldered, and integrated with embedded magnetic sensors.

##  Project Summary
The electronics I worked with include:
- Embedded wiring and soldered circuits  
- 4 Hall-effect magnetic sensors (KY-003) 
- 4 Push buttons  
- 4 Joysticks with 2 inputs each for left and right movement
- Teensy microcontroller for USB keyboard inputs  

These controllers were used to interact with a projection-mapped cube for a firefighting game, where players move magnetic props over sensors at corners of the cube in order to indicate where they are in the space, and then control their player using a joystick and button on each firetruck.

## How to Use This [Code](code/).
1. Open the `.ino` file in the Arduino IDE.
2. Select Tools and under tools Select **Teensy 4.0** as the board type.
3. Select Tools and under USB type: select Keyboard.
4. Install the Keyboard and Bounce libraries if needed.
5. Upload to the Teensy.
6. Connect the controller via USB — it will appear as a keyboard device.


## Changes Made during the Process
- Hardware
    - During the concept phase, the game developer Thomas and the fabrication lead Emily and I were discussing the controller designs. We went through a hose controller with nozzle and movement, a hydrant controller with potentiometers, and then landed on a firetruck controller. I changed our hardware based on the needs for the game and the fabrication of the controllers, meaning we went from analog inputs (potentiometers and analog joystick) to digital inputs (arcade joystick and button).
 
- Wire Management
    - During the concept phase, I was planning to use 2 teensy microcontrollers. One teensy per 2 firetruck controllers, for more spacial abilities and movement abilities. However, our budget and facilitators Professor Jessie Contour and Kyle Evans enforced that I use 1 teensy microcontroller. I used 8 conductor wire cable that insulated into one cord. This meant that I cut 8 pieces of 5 ft cable and soldered 32 wires, including grounds and powers. A skill I learned from needing so many wires, was I was able to create a powerbus and a groundbus on my perfboard.
 

## My Contributions to the Final Project 
- Created wiring diagrams and hardware layout  
- Programmed the Teensy logic handling magnetic sensors, joysticks, and button inputs
- Tested and Iterated upon input keys, logic, and hardware used
- Collaborated with game developers to match input requirements


## Audio Pixel Collider Showcase 11.20.2025
We showcased our video game experience at the University of Austin, AET department event titled Audio Pixel Collider, in the interactive room. Due to the fast paced nature of our project, we were unable to fully set up and playtest the experience until the day of the event, at the event. The project was fully operational for approximately 5 hours.

At this event some issues we ran into:
- As players slammed their fire hydrant and ladder props onto stations, magnetic sensors would become more touchy and prone to fail
- one of the firetruck controller's joystick popped out of place
- The inputs from the magnetic sensors at times would not communicate their position in space, so players were unable to use their joysticks to move.
- The magnet on the bottom of the sensors had too small of a radius, meaning players had to put the props exactly on the sensor to get a read 

## Lessons Learned

Due to APC being the experience's first official playtest, fully functioning, some lessons learned were:
- Durability testing and iterating is a must for an interactive experience (magnetic sensors)
- Durability tests for yanking joysticks and slamming buttons
- Soldering is good, but not the best to switch out touchy sensors
- communicate orientation of props (label front and back) is essential for proper reads from sensors (this is something I did at the event, due to watching players struggle with orientation, added tape and labeled with permanent marker)


## Future Plans
see [Diagram Folder](diagram/) for visual plans.

Based on these Lessons Learned, some plans going forward are to:
- Resolder the magnetic sensors, adding the ability to switchout sensors easily
- screwing in joysticks with tighter washers
- Indenting the material of the stations, so that magnetic sensors are at a slightly lower elevation than platform, making the hydrant and ladder prop safe to slam down

## Folders

[Images Folder of Custom Controllers, Stations and Props](images/).

[Hardware, Wiring, and Soldering](hardware/).

[Diagrams](diagram/)

[Early Concept Sketches](concept/).




## External Links

- **Group Project Google Drive**  
  https://drive.google.com/drive/u/1/folders/10Mozu4MKlOPXDo81eWHoMzp235B-tDY-

- **My Prop Fabrication Portfolio (ArtStation)**  
  [View on ArtStation](https://www.artstation.com/artwork/EznP52)

- **Group Game on itch.io**  
  [Play CODE RED on itch.io](https://ty-700.itch.io/code-red)









