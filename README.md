# Digital Timer
 
Include your responses to the bold questions below. Include snippets of code that explain what you did. Deliverables are due next Tuesday. Post your lab reports as README.md pages on your GitHub, and post a link to that on your main class hub page.

## Part A. Solder your LCD panel

   ![](https://github.com/mattfreed/IDD-Fa19-Lab2/tree/master/Images/IMG_2808.jpg)


## Part B. Writing to the LCD
 
**a. What voltage level do you need to power your display?**

      Need 8.3V total. 5V to power the display and 3.3v to power the backlight

**b. What voltage level do you need to power the display backlight?**

      The backlight requires 3.3v
   
**c. What was one mistake you made when wiring up the display? How did you fix it?**

I had forgotten to connect the 2 halves of the long breadboard. In order to fix this, I had to connect the power and grounds of both halves. I also accidently wired the LCD backwards, as the diagram was slightly misleading.

**d. What line of code do you need to change to make it flash your name instead of "Hello World"?**
 
 lcd.Print("Hello, World!") had to be switched to lcd.Print("Matt")
 
**e. Include a copy of your Lowly Multimeter code in your lab write-up.**

![code](https://github.com/mattfreed/IDD-Fa19-Lab2/blob/master/AnalogInputLCD_Freed.ino)

## Part C. Using a time-based digital sensor

**Upload a video of your working rotary encoder here.**


## Part D. Make your Arduino sing!

**a. How would you change the code to make the song play twice as fast?**

     Double all of the values in the note durations array
 
**b. What song is playing?**

     Star Wars


## Part E. Make your own timer

**a. Make a short video showing how your timer works, and what happens when time is up!**

**b. Post a link to the completed lab report your class hub GitHub repo.**
