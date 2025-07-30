My modifications to the ik1.2 keyboard of Ian Maclarty [Github Ian Maclarty](https://github.com/ianmaclarty/ik)

# General
## Parts
- SMD headphone jack: To connect both keyboard parts I used PJ328 as headbphone sockets, because I had some of them laying around. The housing is a little bit different, but thats ok if your solder precisely.

## PCB
The PCBs are modfied (not by me) to allow to use the same PCS for left and right side of the keyboard.

This requires some additional bridges on the bottom of the right hand side PCB.

## STL
To have a little more space below the PCBS for the bridges, and solder joints, I modified the bottom STLs.
- This increases the actual height of the keyboard by 1 mm.
- Increasing the gaps a little bit for easier mounting.

To have a little more space on top of the PCBS I modified the upper STLs.
- Increasing the gaps a little bit for easier mounting.

**There are only left hand STL files. They can be mirrored during slicing.**
This reduces effort during file maintenance.

## Keymaps
I changed the keymaps to fit my need.
The regarding files are located in **keymaps**.

# Building
Here you find images of the PCBs after soldering diodes and bridges:

Top:
![top pcb](immages/pcb_soldering_top.jpg)

Botoom:
![bottom pcb](immages/pcb_soldering_bottom.jpg)
