# Face-Recognition-Door-Control
In this project, I controlled a servo motor with Face recognition using python OpenCv and Arduino. The classifier used is Numpy Array.
For the classifier to work, the system needs the dataset to compare to predict. The dataset contains 100 photographs. First, the system asks us to provide an image for our review, then preprocesses the image smoothness and other things.
Then, using the color threshold in the opencv tool in python, the classifier compares the photos in the database and tells us how many equals they are 100%. Then, if the result is 85% or more, the door opens and communicates with the arduino using the serial port.
