# Sound-Activated Servo

Servo motor triggers on a clap or loud noise detected by a sound sensor.

## Description
A sound sensor module monitors ambient noise levels. When a clap or loud sound exceeds the sensitivity threshold, the servo rotates 90°, holds for 3 seconds, then returns to its resting position. Demonstrates event-driven output logic, digital input reading, and servo control on an Arduino.

## Components
- Arduino Uno
- 1x Sound Sensor Module (KY-038 or similar)
- 1x SG90 Servo Motor
- Breadboard + jumper wires

## Wiring
| Component        | Arduino Pin |
|------------------|-------------|
| Sound Sensor DO  | Pin 10      |
| Sound Sensor VCC | 5V          |
| Sound Sensor GND | GND         |
| Servo Signal     | Pin 6       |
| Servo VCC        | 5V          |
| Servo GND        | GND         |

## Adjustable Parameters
| Variable       | Default | Description                    |
|----------------|---------|--------------------------------|
| `openAngle`    | 90°     | How far the servo rotates      |
| `closedAngle`  | 0°      | Resting position               |
| `holdTime`     | 3000ms  | How long servo holds open      |

## Note
The sound sensor module has a small potentiometer on board. Adjust it with a screwdriver to tune sensitivity — too high and background noise triggers it, too low and it won't trigger at all.

## Skills Demonstrated
- Digital input reading from an audio sensor
- Servo motor control with the `Servo` library
- Event-driven output logic
- Hardware sensitivity tuning
