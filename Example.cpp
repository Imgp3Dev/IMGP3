#include <iostream>
#include <IMGP3>
  
//Importing Image
P3::Import("Img.png");

/*Converts Image to 5 degrees around*/
P3::Ang(90);

P3::WindowDisplay(/*Screen size x*/150, /*Screen size Y*/112);

//Right click input
P3::Mouse_Input(Right_Click);
//Left click
P3::Mouse_input(Left_Click);
//Uses time to calculate the speed of
//how the model should be moving
//it can be changed in imgp3 header file
P3::Move_Model(time, /*x*/6 , /*y*/7 );
