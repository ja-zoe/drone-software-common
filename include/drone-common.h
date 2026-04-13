#pragma once

typedef struct {
  uint8_t arm_disarm;
  uint8_t spdt_l;
  uint8_t spdt_r;
  uint8_t sp3t_l;
  uint8_t sp3t_r;
} switch_states_t;

typedef struct {
  int16_t lx;
  int16_t ly;
  int16_t rx;
  int16_t ry;
} joysticks_values_t;

typedef struct __attribute__((packed)) {
  joysticks_values_t joysticks_values;
  switch_states_t switches_values;
} control_packet_t;

typedef struct __attribute__((packed)) {

} telemetry_packet_t;