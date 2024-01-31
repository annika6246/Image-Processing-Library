#include <iostream>
#include "lib/include/Image.h"


int main(int argc, char* argv[]) {
    // initialize image object
    Image tester(argv[1], argv[2]);

    // create copy for transformations
    Image tester2 = tester;
    tester2.flipV();
    tester2.flipH();
    tester2.rotate90();
    tester2.rotate270();
    tester2.pointalize();
    tester2.add_border();

    // find length of output path
    size_t length = strlen(argv[2]);

    // create string from last three chars in output path
    std::string type(argv[2] + length - 3, 3);
    tester2.write_image(type);
    return 0;
}
