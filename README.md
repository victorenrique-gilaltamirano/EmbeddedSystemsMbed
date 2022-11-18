# Embedded Systems with Mbed Professional Certificate
By Victor Enrique Gil Altamirano

Verified Certificate of 1st part: Embedded Systems Essentials with Arm: Getting started can be found in this [link](https://courses.edx.org/certificates/e5e40fb271f140adbdea0088bc41b6d3).

Full APIs List of Mbed Os can be found [here](https://os.mbed.com/docs/mbed-os/v6.15/apis/index.html).

## Preparing the simulator
1. Download Docker Desktop
2. Use Docker to Download simulation files by typing in cmd terminal: `$ docker pull armedu/mbed_sim`

## Entering environment
1. In command terminal type `$ docker run -p 7829:7829 armedu/mbed_sim`
2. Right clock on docker icon, select `dashboard` and then `open in browser`.
3. IDE will be displayed in default browser.



## Program in Online MBed compiler

1. Enter to studio.keil.arm.com

2. `File...` - `New...` - `MBed Project`.

3. `Example project...` as `empty`, and name the project. finally `Add Project`.

## Using BluePill

1. Select `NUCLEO-F103RB` as Target hardware.

2. Consider pin names as:
```
| NUCLEO-F103RB | Blue Pill F103 |
|---------------|---------------|
| PA_0          | PA0           |
| PA_1          | PA1           |
| ...           | ...           |
| PA_15         | PA15          |
| PB_0          | PB0           |
| ...           | ...           |
| PC_13         | PC13          |
| ...           | ...           |
```

Check pinout for [Nucleo-F103RB](https://os.mbed.com/platforms/ST-Nucleo-F103RB/) and for [Bluepill-F103](https://microcontrollerslab.com/stm32f103c8t6-blue-pill-pinout-peripherals-programming-features/)

For example, for turning on led in PC13 of bluepill, the code would look like this:
```
#include "mbed.h"

DigitalOut LED(PC_13);
// main() runs in its own thread in the OS
int main()
{
    while (true) {
        LED =1;
    }
}
```

3. Click `Build project`.

4. Save `bin` file in computer.

5. Use `STM32 ST-LINK Utility` to download from computer to microcntroller.





