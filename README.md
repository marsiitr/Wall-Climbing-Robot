# Wall-Climbing-Robot
Srishti 2020
![](https://github.com/marsiitr/Wall-Climbing-Robot/blob/80542ecedfcc531dddfdac09be7de8b2ccad7546/Images%20and%20Videos/Images/front%20view.jpg)

## Abstract
It is a manually controlled bot. It can be moved in a 2D space on the wall. It is a small bot which can stick on the wall for any amount of time. 


## Motivation.
We don't have any small bot which can climb the wall. It can help us in many application.

## Mechanical Aspect
1. The whole syster should be lighter and stong. So we have used 3D printing.
2. For giving the thrust in horizonatal direction we have used a BLDC motor, So that the friction force increases and the body stick with the wall.
![](https://github.com/marsiitr/Wall-Climbing-Robot/blob/80542ecedfcc531dddfdac09be7de8b2ccad7546/Images%20and%20Videos/Images/Cad%20design.png)
3. The propellor is rotate in reverse direction so it can give the required force on the wall.
4. We have used two small DC motors which give the 2D motion on the wall.
5. We have used a caster wheel on the front of the bot for easy rotation of the bot.

## Electronic Aspect
1. All the three motors are controlling by the arduino with the help of a motor driver.
![](https://github.com/marsiitr/Wall-Climbing-Robot/blob/de0ab5a1be7fad8a3adcaa81d91c0fda2761cd6a/Images%20and%20Videos/Images/Arduino%20and%20motor%20driver.jpg)
2. It drives the DC motors with the PWM value signal of 200.
3. When the switch is in Up state, the DC motors rotate in clockwise and bot move in the forward direction.
4. When the switch is in down state, the DC motors rotate in anti clockwise and bot move in the backward direction.
5. It can also change its direction to right and left.

## Work Flow
![](https://github.com/marsiitr/Wall-Climbing-Robot/blob/7cca7e3a2f63b91db35dfd7517cb78079a9fa5c0/Images%20and%20Videos/Images/Work%20flow.png)

## Cost Structure
| Materials  | Cost(INR) |
| ------------- | ------------- |
| caster wheel | 30 |
| Arduino UNO  |500 |
| 1 Motor Driver  | 250 |
| other material | 250  |
| Total | 1030 |

## Application
1. If mounted with camera, it can spy enemies.
2. With proper sensor, it can detect small cracks on the wall, which is not visible through eyes.

## Limitation
1. It is connected with wire , which restricts its motion.
2. It can not go high from a particular height because of pressure difference.

## Future Improvements
1. It can be made remote controlled.
2. It can be made wireless with help of devices like Bluetooth.
3. By improving electronic system and mechanical strength, it can reach greater heights.

## Team Members
1. [Bhavna](https://github.com/Bhavna525)
2. [Monty](https://github.com/Monty-00)
3. Rohit Atal
4. [Yash Vardhan Rai](https://github.com/yashguru10)

## Mentor
1. Samarth Koolwal
2. [Ujjwal Baranwal](https://github.com/ujjwal-baranwal)

## References
https://grabcad.com/library?page=1&time=all_time&sort=recent&query=rubber%20caster%20wheel
https://www.google.com
https://www.rcgroups.com/forums/showthread.php?413706-Calculating-thrust