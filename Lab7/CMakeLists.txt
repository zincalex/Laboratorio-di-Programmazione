cmake_minimum_required(VERSION 3.2 FATAL_ERROR)  #setta la versione minima

project(Robot_in_Maze)  #nome del progetto + versione

include_directories(include)

add_library(RandomRobot #nome libreria + .h + implementazione del .h
  include/RandomRobot.h
  src/RandomRobot.cpp
 )
add_library(Robot
  include/Robot.h
  src/Robot.cpp
 )
add_library(Maze
  include/Maze.h
  src/Maze.cpp
 )

add_executable(tester #crea l'eseguibile compilando tutti i cpp assieme
  src/Maze.cpp
  src/Robot.cpp
  src/main.cpp
  src/RandomRobot.cpp
  )

target_link_libraries(tester RandomRobot Maze Robot) #Specify libraries or flags to use when linking a 
                                                     #given target and/or its dependents
                                                     # (<targer> .... <items>)