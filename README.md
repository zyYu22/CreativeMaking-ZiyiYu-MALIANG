# CreativeMaking-ZiyiYu-MALIANG
MALIANG - a dream space that is up to you.

Video Link: https://youtu.be/s86AhdlNfEc

![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/cover.png)

*1. Concept:</br>*
_1.1 Introduction:</br>_
MALIANG is an interactive 3D video installation that combines traditional Chinese fables and traditional culture with Y2K style pop culture and romantic fantasy of the future world. The installation consists of three carefully designed scenes, each showcasing a unique visual and emotional experience.

In the first scene, a traditional Chinese ink painting scroll is displayed. The delicate lines and magnificent landscape paintings flow between black and white ink paintings, taking the audience into an ancient and mysterious world. This scene shows the audience the profound heritage of Chinese culture through traditional aesthetic elements.

Next, the second scene transforms the black and white ink painting into a vivid color picture. With the passage of time, the richness of colors and details gradually emerge, and the audience feels as if they are in a scene full of life and vitality. This transitional phase showcases elements of the Y2K style, combining technology with aesthetics to bring a fantastic sensory experience to the audience.

Finally, the third scene transforms the colorful 2D ink painting into a 3D space with a metallic texture. At this stage, the audience can feel the change of the environment and the transformation of materials. Popular elements of Y2K color run throughout the installation, creating a surreal space. Through the control of posture sensors and ultrasonic sensors, viewers can freely explore and interact with the device, switch scenes, and manipulate the animation effects of objects.

This work is not just about the collision of tradition and modernity. This work also combines traditional culture with Y2K style to interpret pre-millennial pop culture and future art aesthetic experience in a new form. The audience will be immersed in a world of imagination and creativity, experiencing the technological advancement and aesthetic passion inherent in Y2K style. This work will lead the audience through time and space, feel the interweaving of the past and the future, and inspire their expectations and yearning for the illusory future.

This work is not just an interactive animation, it can be placed in any suitable public space. For example, in this exhibition, I projected this work on a piece of clothing and interacted with it. I left a unique texture on the clothes in the real world while exploring the virtual space. There are many more forms that can be explored, and I plan to continue to refine both the technical and visual aspects of it.

_1.2 The story line of the traditional Chinese fable Magic Brush MALIANG_
Ma Liang is a poor and talented painter, he got a pen of the Divine comedy, if he draws with this pen will become reality, Ma Liang used this pen to help many people through difficulties. This story uses the brush full of romance and imagination to express the positive impact of art on people, human dreams, and aspirations.

I started from the Chinese classical landscape ink painting, from black and white to psychedelic color, two-dimensional expression to three-dimensional expression. The Millennium Trend (Y2K) is people's romantic imagination of technology. In the 2020s, the fashion aesthetic trend of two decades ago has been revived, suggesting a new round of impact brought by newer technology to the world. As a millennial, I grew up documenting the social upheaval brought about by technology, and although many new anxieties and fears have been born along with the widespread use of technology, I prefer to make technology more romantic.

So, I chose "Magic Brush Ma Liang" as the story line of this project. A brush that can paint everything in the world is my vision and expectation for future science and technology.

_1.3 Metaphor of design in works_
In Chinese traditional culture, connotation and metaphor are very important artistic expressions. So, I applied this metaphor to my fantasy of future aesthetics. Instead of recreating the full animation of the magic pen, I chose to use the posture sensor to simulate the pen so that users can get more interactive experience. The butterfly flies over the place will produce color change, wind blowing and other animation effects, this is my explanation of the "butterfly effect". The color change of the models of mountains, water, lotus flowers and leaves in the virtual space suggests the traditional Chinese fable of "Midas touch".

Attached:
The Midas touch: The touch of a stone on an object turns it into gold. This idiom tells us that something seems so easy that one can get a lot of wealth or success all at once. But we should also be wary that greed and desire may cause us to lose something more important.








2.	Mood board & Reference

![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Reference_Elements/87bf33759fd1145df8be473706986ebf.jpg)
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Reference_Elements/7a980e657af72287d6b0898e2c8ae8dd.jpg) 
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Reference_Elements/f3df47c90131d6ac518a9bfa163cef4a.jpg)
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Reference_Elements/f7ec3251081eefae8a854d88796238bd.jpg)
   

3.	Visual Design
3.1	I found some 2D materials in traditional Chinese ink painting, stylized them and exported them as PSB files, imported them in Unity using Sprite function, and then bound 2D character bones.
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/VE.JPG)
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/VE1.png)

3.2	Based on these 2D ink painting materials, I built 3D models in blender and created bones and bone bindings in blender to prepare for subsequent interactive animations in unity.
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/VE5.png)
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/UnityTest.JPG)

 
 


4.	Animation Design
Unlike the group assignment "NIAN" last semester, the animation of this project is all made using unity's skeleton animation to achieve more flexible interaction effects, but the large amount of material also brings more work to the project. Compared with importing the frame animation generated by AE into unity production interaction, unity has a higher degree of operation on the skeleton animation, and if you want to modify it later, it will be easier to achieve, and reduce the problem of running lag caused by excessive frame animation.

   
 






5.	Interactive Design
The hardware used to achieve the interaction effect is GY9960 (gesture sensor) and ultrasonic sensor. The gesture sensor can recognize different gestures including up, down, front, back, left, right, and so on, and output signals. Arduino converts the signal output of gesture sensor and ultrasonic sensor into digital, and unity software recognizes and controls the corresponding model animation (Simulate wind blowing, shaking, changing colors and other animation effects).
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/ArduinoTest.JPG)
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/InteractiveTest.JPG)

   


6.	Sound Design
I did not choose to use the background music that had been made, but chose some materials about Tibetan bells, ancient Chinese Musical Instruments, psychedelic electronic music and so on to adjust the reverberation and sound channels in the AU software. Export to wav mode and import to unity asset library.
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/Sound_AUEditing/1.png)
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/Sound_AUEditing/2.png)
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/Sound_AUEditing/3.png)

   


7.	Final Effect
Some of the visuals are shown below, and you can watch the final interaction through the full video.
https://youtu.be/s86AhdlNfEc
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/VideoonCloth.PNG)



8.	Future Development
The posture sensor is based on sensing different colors, light and other elements to recognize gestures. In this project, I chose to use a projector for demonstration, but I found that the interaction effect of the posture sensor was unstable in low light. Therefore, I try to use the more flexible MPU-6050 to complete the interaction effect through multi-axis gyroscope Angle recognition instead of gesture sensor.
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/ArduinoTest1.JPG)
![Image](https://github.com/zyYu22/CreativeMaking-ZiyiYu-MALIANG/blob/main/Effect_Elements/ArduinoTest2.JPG)
 
 
