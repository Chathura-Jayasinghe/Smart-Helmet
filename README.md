![White and Blue Professional Modern Technology Pitch Deck Presentation](https://github.com/user-attachments/assets/ecc26f15-4324-4503-94db-86526f380673)

# Smart Helmet System for Motorcycle Safety

![Smart Helmet](https://user-images.githubusercontent.com/35000278/116809754-50276780-ab5d-11eb-87fa-1f513be1f876.png)

This repository contains the model and training notebook for traffic sign recognition as part of the Smart Helmet System for Motorcycle Safety.

### Overview
This project focuses on enhancing the safety of motorcycle riders in Sri Lanka by developing a **cost-effective smart helmet** equipped with integrated sensors and intelligent detection systems. The goal is to reduce accidents by monitoring critical parameters and automatically taking preventive actions when necessary. 

Key features include alcohol detection, impact detection, road sign recognition, and environmental monitoring. The system utilizes **Arduino**, **Raspberry Pi**, **YOLOv5**, **OpenCV**, and various sensors to deliver a comprehensive safety solution. In the event of an accident, the impact detection system can alert the rider's guardian with crucial details.

### Key Features
- **Alcohol Detection**: Monitors the rider's breath for alcohol levels using an alcohol sensor. If alcohol is detected, the engine is automatically stopped.
- **Temperature Monitoring**: Uses a temperature sensor to monitor the heat inside the helmet. If the temperature exceeds 30°C, a cooler is activated to cool the helmet interior.
- **Impact Detection**: Detects impacts using a piezoelectric sensor. In case of a crash, the system sends an alert with GPS location to the rider’s guardian via GSM and GPS modules.
- **Road Sign Detection**: Developed using Python, OpenCV, and YOLOv5, the system can recognize speed limit signs and alerts the rider when their speed exceeds the limit using a buzzer and LED.
- **Speed Monitoring**: Measures the vehicle’s tire speed and compares it with the detected road sign speed limits. Provides warnings through buzzer and LED if the limit is exceeded.

### Hardware Components
- **Arduino Uno**: Microcontroller to handle sensor inputs and control the cooler and engine stop functions.
- **Raspberry Pi**: Used for road sign detection with YOLOv5 and OpenCV.
- **Sensors**:
  - **Alcohol Sensor**: Detects alcohol in the rider’s breath.
  - **Temperature Sensor**: Monitors helmet temperature and activates the cooler when it exceeds 30°C.
  - **Piezoelectric Sensor**: Detects impacts and sends signals for alerts.
- **GSM Modem & GPS Module**: For sending location information after an accident.

### Software Components

- **YOLOv5 and OpenCV**: Used for road sign detection. YOLOv5 model is retrained on a custom dataset for speed limit signs.
- **Python & PyTorch**: Manages image processing and detection on the Raspberry Pi.
- **GPIO (Raspberry Pi)**: Controls the buzzer and LED for alert notifications.
- **Arduino IDE**: Manages communication with the sensors and controls the engine and cooler.

### System Workflow
1. **Helmet Safety Monitoring**:
   - The system continuously checks alcohol levels and helmet temperature.
   - If alcohol is detected, the engine is stopped automatically.
   - If the temperature exceeds 30°C, the cooler is activated.

2. **Impact Detection**:
   - A piezoelectric sensor detects any major impacts.
   - If a significant impact occurs, the system sends an alert with GPS location to the guardian's mobile phone using a GSM modem.

3. **Road Sign Detection & Speed Monitoring**:
   - The Raspberry Pi processes images using YOLOv5 to detect speed limit signs.
   - The system measures tire speed and compares it to the detected speed limit.
   - If the tire speed exceeds the limit, the buzzer sounds, and the LED blinks.

### Future Plans
- **Enhanced Impact Detection**:
  - Incorporate a GSM modem and GPS module to improve the impact detection system.
  - Automatically send the accident location to a guardian's mobile phone when a crash is detected.

### How to Run

#### Arduino Setup:
1. Install the **Arduino IDE** and upload the provided code to the Arduino Uno for alcohol detection, temperature monitoring, and impact detection.
2. Connect the sensors (alcohol, temperature, piezoelectric) to the corresponding pins on the Arduino board.

#### Raspberry Pi Setup:
1. Install **Python**, **OpenCV**, and **YOLOv5** on the Raspberry Pi.
2. Retrain the YOLOv5 model on your custom speed limit dataset.
3. Use the provided script to activate the road sign detection system.
4. Connect the buzzer and LED to the GPIO pins for speed limit alerts.

#### GSM & GPS Module:
1. Configure the GSM modem and GPS module for accident alerts.
2. Ensure the modules are connected to the Arduino and properly configured to send messages to the guardian.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/Smart-Helmet.git
   ```

2. Install required dependencies for YOLOv5, OpenCV, and PyTorch on Raspberry Pi:
   ```bash
   pip install -r requirements.txt
   ```

### Dataset

The dataset used for training is [German Traffic Sign Recognition Benchmark (GTSRB)](https://benchmark.ini.rub.de/?section=gtsrb&subsection=dataset), which contains 43 classes of traffic signs. The training set contains 39,209 labeled images, and the test set contains 12,630 unlabeled images.

![GTSRB Dataset](https://user-images.githubusercontent.com/35000278/116809754-50276780-ab5d-11eb-87fa-1f513be1f876.png)

### Model

Using YOLOv5 for training, we achieved over 93% mAP (Mean Average Precision) on the GTSRB dataset.

![Model Performance](https://user-images.githubusercontent.com/35000278/116809984-cd071100-ab5e-11eb-8789-29afd40c0094.png)

### Contributing
Contributions are welcome! Please fork the repository and create a pull request for any enhancements or bug fixes.

### License
This project is licensed under the MIT License - see the LICENSE file for details.

### Contact
For any queries or support, feel free to reach out at:
- **Email**: [chathurajayasinghe04@gmail.com](mailto:chathurajayasinghe04@gmail.com), [kalaichelvankabilan19@gmail.com](mailto:kalaichelvankabilan19@gmail.com)
- **LinkedIn**: [Chathura Jayasinghe](https://linkedin.com/in/Chathura-Jayasinghe), [Kabilan Kalaichelvan](https://linkedin.com/in/Kabilan-Kalaichelvan)
