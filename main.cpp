#include <fstream> // we want to insert into the output stream which is our image file

using namespace std;

int main(){

    ofstream image;
    image.open("image.ppm");

    if(image.is_open()){
        // header info
        image << "P3" << endl;       // P3 is the PPM type. 
        image << "250 250" << endl;  // 250 by 250 dimensions
        image << 255 << endl;      // max value for each color 
    }

    // loop through to setup rgb values per row
    
    for(int i = 0; i < 250; i++){
        for(int i = 0; i < 250; i++){
            // all white image. remember the spacing
            image << "255 255 255" << endl; // all black -> image << 0 << " " << 0 << " " << 0 << " " << endl;
        }
    }

    image.close();

    return 0;
}