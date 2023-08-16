
#include <iostream>
#include <string>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
 
using namespace std; //
int main(int argc, char *argv[]) {
    	Fl_Window *window;

window = new Fl_Window (600,600,"DEMO");
    window->color(FL_WHITE);
    Fl_Button *button[4][4];
    for (int i = 0; i < 4; i++) {
        
    for (int j = 0; j < 4; j++) {
    button[i][j] = new Fl_Button (100+i*100,100+j*100,100,100,"button");
      //  char *s=new char[sizeof(int)];
      //  sprintf(s,"%d" ,i+4*j+1);
    button[i][j]->label(int2charstar(j + i + 1));
        
    }
    }
    //Fl_Button*button[=new Fl-Button(400,400,100,100,"Button4");
    // outer window
    //Fl_Button*button1=new Fl_Button(100,100,100,100,"Button1");
        //window->end();
   // window->color(Fl_WHITE);
  //  button1->down_color(Fl_RED);
    //Fl_Button*button2=new Fl_Button(200,200,100,100,"Button2");
   // Fl_Button*button3=new Fl_Button(300,300,100,100,"Button3");
       window->end();
    	window->show();
    	int s=Fl::run();
    //return(Fl::run());
    // the process waits from here on for events
    cout<<"exiting...\n"<<endl;
    return s;
}
//how to compile: fltk-config --compile 1window.cpp
//this will produce executable file called 1window
//run it ./1window
