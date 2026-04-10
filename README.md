# SuperDoppler2000
BT Send Data H & T

Main loop sends Temperature and Humidity Data from AHT sensor (old sensor no pressure data)
Connect RX to PA9 and TX to PA10 

<img width="584" height="471" alt="Screenshot 2026-04-10 at 10 45 10 AM" src="https://github.com/user-attachments/assets/7ff8b68a-7628-469f-9a2e-6439e9393cd0" />

If you want to change the message sent, change the sprintf in "main.c" (core-->src-->main.c) in the main while loop 

Rough outline of how to connect HM10 to raspberry pi here: https://docs.google.com/document/d/1dRe9r46AMOh3whqpXwOjyoZfKZXxDHSTZSgcjSjQhZo/edit?usp=sharing
using this tutorial : https://www.youtube.com/watch?v=VRqDqq9hc24
