#include "C:\Users\Anderson\Desktop\RASPBERRY PI PICO\aixt_rppico\ports\Raspberry-Pi\Raspberry-Pi-Pico\api\machine/pin.c"
#include "C:\Users\Anderson\Desktop\RASPBERRY PI PICO\aixt_rppico\ports\Raspberry-Pi\Raspberry-Pi-Pico\api\machine/adc.c"
#include "C:\Users\Anderson\Desktop\RASPBERRY PI PICO\aixt_rppico\ports\Raspberry-Pi\Raspberry-Pi-Pico\api\machine/pwm.c"
#include "C:\Users\Anderson\Desktop\RASPBERRY PI PICO\aixt_rppico\ports\Raspberry-Pi\Raspberry-Pi-Pico\api/builtin.c"

int BRILLO;

void setup() {

pin_setup(led5, out);

 }

void loop() {

BRILLO = adc_read(POT1)/4;
pwm_write(led5, BRILLO);

}