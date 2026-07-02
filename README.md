# Drone Software Common

Shared ESP-IDF component for a custom-built drone. It defines the data structures that travel over the ESP-NOW link between the handheld transmitter and the flight controller, so both sides always agree on the wire format:

- `control_packet_t` - joystick values (yaw, throttle, roll, pitch) plus switch states (arm/disarm, SPDT and SP3T switches)
- `telemetry_packet_t` - telemetry sent back from the drone (in progress)

## Usage

This repo is consumed as a git submodule at `components/drone-software-common` by:

- [drone-transmitter](https://github.com/ja-zoe/drone-transmitter)
- [drone-flight-software](https://github.com/ja-zoe/drone-flight-software)

ESP-IDF picks it up automatically as a component; include it with:

```c
#include "drone_common.h"
```

Changes here affect both firmwares, so update the submodule pointer in each consumer together.
