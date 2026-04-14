#pragma once

typedef struct {
  uint8_t arm_disarm;
  uint8_t spdt_l;
  uint8_t spdt_r;
  uint8_t sp3t_l;
  uint8_t sp3t_r;
} switch_states_t;

typedef struct {
  int16_t yaw;
  int16_t throttle;
  int16_t roll;
  int16_t pitch;
} joysticks_values_t;

typedef struct {
  joysticks_values_t joysticks_values;
  switch_states_t switches_values;
} control_packet_t;

typedef struct {

} telemetry_packet_t;