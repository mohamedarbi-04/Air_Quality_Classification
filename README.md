# Air Quality Monitoring & Classification System

An intelligent IoT-based air quality monitoring system developed using ESP32, environmental sensors, and Machine Learning. The system continuously monitors indoor air conditions, classifies air quality levels in real time, and sends alerts when dangerous conditions are detected.

## Overview

This project combines IoT and Machine Learning to provide real-time air quality assessment in educational environments such as classrooms, laboratories, and amphitheaters.

The system collects environmental data from multiple sensors, processes it locally on an ESP32 microcontroller, and classifies air quality into different categories using an embedded Decision Tree model.

## Features

- Real-time monitoring of environmental conditions
- Multi-sensor data acquisition
- Embedded Machine Learning inference on ESP32
- Air quality classification:
  - GOOD
  - MEDIUM
  - POOR
  - DANGER_GAS
  - DANGER_POLLUTION
- Local alerts using LEDs and buzzer
- LCD display for live measurements
- Remote monitoring through Blynk dashboard
- Wi-Fi connectivity and cloud notifications

## Hardware Components

- ESP32-WROOM-32
- DHT22 Temperature & Humidity Sensor
- MQ-2 Gas Sensor
- MQ-135 Air Quality Sensor
- LCD 16x2 I2C Display
- LEDs
- Buzzer

## System Architecture

1. Collect sensor data:
   - Temperature
   - Humidity
   - Combustible gas concentration
   - Air pollution level

2. Feature Engineering:
   - Heat Index
   - Gas Ratio

3. Air Quality Classification:
   - Safety threshold checks
   - Machine Learning Decision Tree inference

4. Alert Generation:
   - Visual alerts (LEDs)
   - Sound alerts (Buzzer)
   - Remote notifications via Blynk

## Machine Learning Pipeline

### Data Collection

Environmental data was collected directly from the ESP32 sensors and exported to CSV format for training.

### Data Preprocessing

- Data cleaning
- Feature engineering
- Categorical encoding
- Train/Test split

### Features Used

- Temperature
- Humidity
- MQ2
- MQ135
- Heat Index
- Gas Ratio
- Operating Mode

### Model

- Algorithm: Decision Tree Classifier
- Framework: Scikit-learn

The trained model was converted into optimized C++ conditional statements and deployed directly on the ESP32 for edge inference.

## Technologies Used

### Embedded Systems
- ESP32
- Arduino IDE
- C++

### Machine Learning
- Python
- Scikit-learn
- Pandas
- NumPy

### IoT & Dashboarding
- Blynk IoT Platform
- Wi-Fi Communication

## Results

- Real-time air quality classification
- Embedded AI execution without external servers
- Remote monitoring through Blynk dashboard
- Fast response to hazardous situations
- Low-cost deployment (<150 TND)

## Future Improvements

- Integration of a dedicated CO₂ sensor (MH-Z19B)
- Historical data storage
- Custom web dashboard
- Advanced Machine Learning models
- Multi-node deployment for smart building monitoring

## Authors

Developed as an Engineering School Project at Tunisia Polytechnic School (EPT).

**Mohamed Arbi Ben Lakhal**
