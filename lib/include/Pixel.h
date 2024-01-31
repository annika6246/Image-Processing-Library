
#ifndef IMAGE_PROCESSING_FALL_2023_PA02_ANNIKA6246_PIXEL_H
#define IMAGE_PROCESSING_FALL_2023_PA02_ANNIKA6246_PIXEL_H


class Pixel {
private:
    unsigned char comp1;
    unsigned char comp2;
    unsigned char comp3;
    unsigned char comp4;
    int numComponents;
public:

    // constructors
    Pixel();

    Pixel(int numC);

    // use default destructor
    ~Pixel();

    // copy constructor
    Pixel(const Pixel&);

    // getter
    unsigned char getElement(int nComp);

    // setter
    void setElement(int nComp, unsigned char val);

};


#endif //IMAGE_PROCESSING_FALL_2023_PA02_ANNIKA6246_PIXEL_H
