#pragma once
#include <stdint.h>

#define STICK_OUT_MIN 0
#define STICK_OUT_MAX 5000

typedef enum {
  SW_OFF = 0,
  SW_ON  = 1,
  SW_MID = 2
} SwitchState;
typedef struct {
  SwitchState arm_disarm;
  SwitchState spdt_l;
  SwitchState spdt_r;
  SwitchState sp3t_l;
  SwitchState sp3t_r;
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