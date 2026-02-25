My project is a password-protected safe box.

When the user enters the correct password, the box will say "correct password" and open.

If the user enters the wrong password, the box will say "incorrect password" and will not open.

To enhance accessibility for deaf people, the box will play a sound corresponding to each number entered.


Here's my final code. I initially encountered a conflict between the Servo.h and TMRpcm.h libraries, as both were using Timer1.

To resolve this, I found a library that allows the servo to operate on Timer2: ServoTimer2. This article and video were helpful:

Article: https://projecthub.arduino.cc/ashraf_minhaj/how-to-use-servotimer2-library-simple-explain-servo-sweep-9bbe4e
Video: https://youtu.be/UZhVfkpcBOQ?si=rQRDuxlkr7vT5w55
