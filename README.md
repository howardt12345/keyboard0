# keyboard0

Tenkeyless keyboard with macro keys, 2 rotary encoders, OLED display, and integrated USB hub with up to 6 ports.

[The layout](http://www.keyboard-layout-editor.com/#/gists/689bc560553c37fa0d04dfba9f11ed96)

# Prototype 1:
## Status: Failed.
## Progress
- [x] Ordered PCBs, Plates, and components
- [x] PCBs arrived
  - [ ] First round of testing passed
  - [ ] Ordered additional components
- [ ] Initial components arrived
  - [ ] PCB functionality verified with initial components
    - [ ] USB hub functionality should be fully complete at this stage
- [ ] Additional components arrived, everything needed to create working PCB should be ready
  - [ ] Soldered all components to first prototype unit
  - [ ] Everything works on first prototype unit 
  - [ ] Soldered all components to the rest of the units
  - [ ] Everything works on the rest of the units
- [ ] 3D Printed case prototype
  - [ ] Printed case prototype fit is correct
- [ ] Collected payment from buyers, ordered case and associated components
- [ ] Case and case components arrived
  - [ ] Everything fits in case

## Known issues
- Rotary encoders are off centered
  - Solution:
    - Pretend it does not exist, design case around current location
- OLED pins are flipped
  - Solution:
    - Hack together right angle header pins
    - Replace pins on OLED with new pins
    - Use jumper wire to connect keyboard to OLED
  - Potential issues:
    - Is a weird hack that might not fit well
- Circuit breaker IC does not work
  - Solution:
    - Remove IC, connect VBUS to VCC.
- USB hub does not work

## First round of testing (Primarily PCB functionality):
### Receiving the package
- [x] Is the package intact and not damaged?
- [x] Is everything in the package?
- [x] Is the package properly packed?
- [x] Take pictures of the package.

### Basic inspection
- [x] Are all the components present? 
- [x] Are all the components correct?
- [x] Are all the components in the right place?
- [x] Are the traces clean?
- [x] Do the traces look like they are routed to the proper locations?
- [x] Are the connectors in the right place?
- [x] Does the plate look fine?
- [x] Does the plate align with the PCB?
- [x] Take pictures of the PCB and Plate.

### Powering on the device
- [ ] Does it turn on?
- [x] Do all the indicator LEDs power on?
- [ ] Does the USB hub power on?
- [ ] Does the microcontroller power on? (no indicator light, will be hard to tell)
- [ ] Does nothing noticeably break?

### USB Hub functionality
- [ ] Does the USB hub work?
  - [ ] Do the USB-C ports work? (can test immediately)
  - [ ] Do the USB-A ports work? (have to wait for ports to arrive)
  - USB port testing:
    - Plug in a USB drive, see if it works and test transfer speed
    - Plug in a hard drive, see if it works and test transfer speed
    - Plug in phone, see if it charges, test transfer speed
- [x] Is the USB hub distributing power correctly?
- [ ] Are there no noticeable issues with the functionality of the USB hub?
  
### Keyboard flashing
- [ ] Is the keyboard detected by QMK toolbox?
- [ ] Does the firmware successfully flash?

### Keyboard firmware
- [ ] Does the firmware work?
- [ ] Is the keymapping correct?
- [ ] Do the rotary encoders work?
- [ ] Does the RGB backlight work?
- [ ] Does the OLED work?

### Stress testing
- [ ] If multiple USB devices are connected at the same time, does the USB hub still work?
- [ ] If multiple USB devices with high power draw are connected, are there no issues? 
- [ ] Does NKRO work?
- [ ] Do the hotswap sockets work as intended?

## Notes
- There is some sort of unknown residue on the PCB. 
