## frieren-dungeon

A game developed in C for the mGBA emulator, with fantasy character Frieren as the main character.
Frieren is known for taking a chance on any chest, or mimic, that she finds. Can she guess correctly this time?

### Game structure

This game is intended for the mGBA emulator, and uses such keybinds as the user has set.
By default, START is Enter, SELECT is Backspace, and A is X (yeah...).
+ You have a choice between three chests. Any one of them could be a mimic... or none of them.
+ You'll never know where the good spells are without checking them all!
+ Press A to interact and check each chest
+ If you check a mimic, you lose health
+ Don't even think about strategizing - you can check a mimic and it could be treasure the next time you look!

### Context

This was a fun week-long project in my computer organization course at university, intended as an introduction to
the interaction between hardware and software. This meant understanding DMA and using it to render images faster,
understanding the VideoBuffer, VSync (WaitForVBlank), and other GBA development standards to create a game that
doesn't tear or stutter.

### Setup

The user must have mGBA installed.
To run the game, App.gba should be used like any other .gba file in mGBA.
The file can be dragged onto an open mGBA window. 

#### Windows

The CS2110 course provided a docker container with necessary development tools,
runnable with the cs2110docker-gba.bat batch file. Then one can simply make the project,
compiling to App.gba.

