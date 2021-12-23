#include <fstream> // we want to insert into the output stream which is our image file

using namespace std;

int main(){

    ofstream image;
    image.open("image.ppm");

    if(image.is_open()){
        // header info
        image << "P3" << endl;       // P3 is the PPM type. 
        image << "250 250" << endl;  // 250 by 250 dimensions
        image << "255" << endl;      // max value for each color 
    }

    image.close();

    return 0;
}