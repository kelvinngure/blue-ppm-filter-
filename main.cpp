#include <fstream> // we want to insert into the output stream which is our image file
#include <iostream>

using namespace std;

int main(){
    // EXPERIMENTAL STUFF AT BOTTOM COMMENTS

    ifstream old_image;
    ofstream new_image;

    old_image.open("monument.ppm");
    new_image.open("monument_copy.ppm");

    string tempStorageString;

    // direct copy example
    if(old_image.is_open() && new_image.is_open()){
        while(getline(old_image, tempStorageString)){
            new_image << tempStorageString << endl;
        }
    }

    old_image.close(); 
    new_image.close();

    // modify monument into blueMonument
    ofstream filtered_image;
    ifstream image; 

    image.open("monument.ppm");
    filtered_image.open("blueMonument.ppm");

    // COPY HEADER INFO
    string type, width, height, max_val; 
    image >> type >> width >> height >> max_val; // extracts, stops at /n or space

    filtered_image << type << "\n" << width << " " << height << "\n" << max_val << endl; // insert P3 into filtered_image. have to store in temporary string stream first
    


    
 
    return 0;
}   





    // ofstream image;
    // image.open("image.ppm");

    // if(image.is_open()){
    //     // header info
    //     image << "P3" << endl;       // P3 is the PPM type. 
    //     image << "250 250" << endl;  // 250 by 250 dimensions
    //     image << 255 << endl;      // max value for each color 
    // }

    // /* loop through to setup rgb values per row
    //     for(int i = 0; i < 250; i++){
    //         for(int i = 0; i < 250; i++){
    //             // all white image. remember the spacing
    //             image << "255 255 255" << endl; // all black -> image << 0 << " " << 0 << " " << 0 << " " << endl;
    //         }
    //     }
    // */  
    // image.close();


// footnote: 
// cin >> name;        means extract from cin (input stream) into name
// cout << "hello";    means insert into cout(output stream) value "hello"