#ifndef CONFIG_H
#define CONFIG_H

// Linear actuator settings
#define STEPS_PER_REVOLUTION 200               // steps
#define PULLEY_TEETH 25                        // teeth of the pulley
#define BELT_PITCH 2                           // mm
#define MICROSTEP_POWER_OF_2 5                 // 2^5 = 32 microsteps
#define LINEAR_ACTUATOR_MAX_SPEED 1000.0f         // mm/s
#define LINEAR_ACTUATOR_MAX_ACCELERATION 10000.0f // mm/s^2
#define CALIBRATION_COARSE_SPEED 100           // mm/s
#define WITHDRAWAL_DISTANCE 10                 // mm
#define CALIBRATION_FINE_SPEED 10              // mm/s
#define FINE_CALIBRATION_SAMPLES 2             // number of samples to take for fine calibration
#define ERROR_THRESHOLD 1                      // mm
#define RMS_CURRENT 20                        // percent of the max current
#define STALL_VALUE 60                        // [0..255]

// TMC Serial port settings
#define TMC_SERIAL_PORT Serial2
#define TMC_SERIAL_BAUD_RATE 115200

#define TMC1_ADDRESS TMC2209::SERIAL_ADDRESS_0
#define TMC2_ADDRESS TMC2209::SERIAL_ADDRESS_0
#define TMC3_ADDRESS TMC2209::SERIAL_ADDRESS_0
#define TMC4_ADDRESS TMC2209::SERIAL_ADDRESS_0

// TMC Dir and Step Settings
#define P1_STEP_PIN GPIO_NUM_4
#define P1_DIR_PIN GPIO_NUM_2

#define P2_STEP_PIN -1
#define P2_DIR_PIN -1

#define P3_STEP_PIN -1
#define P3_DIR_PIN -1

#define P4_STEP_PIN -1
#define P4_DIR_PIN -1

#define TMC_R_SENSE 0.11f

// solenoid settings
#define P1_SOLENOID_PIN -1
#define P2_SOLENOID_PIN -1
#define P3_SOLENOID_PIN -1
#define P4_SOLENOID_PIN -1

// beam switch settings
#define BEAM_SWITCH_TIMEOUT_MS 60
#define BEAM_T_PIN GPIO_NUM_26

#define P1_BEAM_R_PIN GPIO_NUM_25
#define P2_BEAM_R_PIN -1
#define P3_BEAM_R_PIN -1
#define P4_BEAM_R_PIN -1

// communication settings
#define RASP_TX_PIN -1
#define RASP_RX_PIN -1
#define RASP_BAUD_RATE -1

// TASKS CORES ASSIGNMENT, default code use core 1 (like content of setup and loop functions in main.cpp)
#define TASK_BEAM_EMITTER_CORE 1
#define TASK_BEAM_RECEIVER_CORE 1
#define TASK_LINEAR_ACTUATOR_CORE 0
#define TASK_SOLENOID_CORE 1
#define TASK_RASP_COMMUNICATION_CORE 1
// TASKS PRIORITY ASSIGNMENT, 0 is the lowest priority (inactive task)
#define TASK_BEAM_EMITTER_PRIORITY 2
#define TASK_BEAM_RECEIVER_PRIORITY 2
#define TASK_LINEAR_ACTUATOR_PRIORITY 3
#define TASK_SOLENOID_PRIORITY 3
#define TASK_RASP_COMMUNICATION_PRIORITY 1
// TASKS delay between each call, to free the CPU
#define TASK_BEAM_EMITTER_DELAY_MS 10

#endif