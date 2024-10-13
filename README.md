# Image-Processing-Library

This repository includes an image-processing library built using C++ to complete transformations on images with array-based operations. The program uses functionalities from the stb_image library to read image files as 1d arrays and write them as different image formats. After images are loaded using the stb functions, they are converted to 2d pixel arrays before transformations are completed.

Available transformations include:
- Rotations
- Flip on horizontal/vertical axis
- Add image border
- Pointalization (type of blurring effect to imitate painting brushstrokes)

The program takes two command line arguments, the first being the input path of the image file, the second being the output path of the output file. Both of these arguments should include the ending for example ".jpg" as part of the path. The example command line arguments included are sampleImages/iceland.JPG and sampleImages/out.jpg.
