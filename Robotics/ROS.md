# What is ROS?
**First, what it is not:**

Robot Operating System, despite its name, is not an operating system. Nor it is really a framework.

ROS is more of a middleware, something like a low-level “framework” based on an existing operating system. The main supported operating system for ROS is Ubuntu. You have to install ROS on your operating system in order to use it.

Robot Operating System is mainly composed of **2 things**:

+ A core (middleware) with communication tools
+ A set of plug & play libraries

Basically, a middleware is responsible for handling the communication between programs in a distributed system.

When developing a new software you can choose to: A. Develop one code base with everything compiling and running in one block, or B. Create sub programs, one for each sub task/functionality of your application.

Without any suspense, the second option is the best when developing a robotics software. You really need to be able to develop one part of your application (let’s say, a driver for a sensor), and run it without the whole application.

So, you’re now writing many small modules, and they need to communicate between each other. ROS core is here to help you do that.

##### Source: https://roboticsbackend.com/what-is-ros/

<hr>

## Top Udemy Courses:
1. [Anis Koubaa - ROS for Beginners: Basics, Motion, and OpenCV](https://www.udemy.com/course/ros-essentials/)
2. [Anis Koubaa - ROS for Beginners II: Localization, Navigation and SLAM](https://www.udemy.com/course/ros-navigation/)
3. [Edouard Renard - ROS For Beginners (ROS Noetic, Melodic, Kinetic)](https://www.udemy.com/course/ros-for-beginners/)

## Top YouTube Channels: 
1. [The Construct](https://www.youtube.com/c/TheConstruct/playlists)
2. [James Bruton](https://www.youtube.com/c/jamesbruton/playlists)
3. [Pranshu Tople](https://www.youtube.com/c/PranshuTople/playlists)