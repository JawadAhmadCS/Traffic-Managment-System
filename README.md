# Traffic Management System in C++
## Overview
This is a project developed as part of an educational exercise to practice Object-Oriented Programming (OOP) concepts in C++. The system simulates a Traffic Management System, handling various vehicle types like cars, motorcycles, and trucks. While designed for learning purposes, it may contain errors, and improvements are possible as it hasn't undergone thorough testing.
> **Note**: While designed for learning purposes, it may contain errors, and improvements are possible as it hasn't undergone thorough testing.



## Interface:

![1](https://github.com/user-attachments/assets/20221fdb-c9f1-4029-8a35-722346b92afb)
![2](https://github.com/user-attachments/assets/8527b1ff-5276-408e-b3a6-ca883ed8ac32)


## Features

- **Vehicle Base Class**: A base class `Vehicle` stores general information for vehicles.
- **Derived Classes**:
  - `Car`
  - `Motorcycle`
  - `Truck`
  These classes extend the functionality of the `Vehicle` class.
- **Traffic Control Center**: A `TrafficControlCenter` class manages and controls the flow of vehicles in the system, using random numbers to simulate real-world traffic conditions.
- **File Handling**:
  - Stores traffic data in `trafficdata.txt`.
  - The traffic data is written to the file for further analysis or record-keeping.
- **Auto-Detect and Manual Entry Options**:
  - **Auto-Detect System**: Automatically generates traffic data using random numbers.
  - **Manual Data Entry**: Allows users to manually input vehicle details.
- **Tax Application**:
  - Calculates tax based on the type of vehicle, with different rates for cars, motorcycles, and trucks.
- **Additional Functionalities**:
  - Includes extra classes to enhance user interaction and clarity.
  - The system is designed to be automatic and user-friendly, though still in development.
- **User Authentication:**:
  - A preset login system with the following credentials:
    
    - Username: `jawad`
    - Password: `1234`

## Usage Instructions

### How to Run:
1. Create file `trafficdata.txt` in the same folder as the program.
2. Open the file named `Traffic Management system.cpp`.
3. Compile the Program using any C++ compiler like **Dev C++**.
4. Run the Program.

### Input:
- **Auto-Detect**: Generates random traffic data for cars, motorcycles, and trucks.
- **Manual Input**: The user can manually enter details for each vehicle.

### Output:
- Displays vehicle traffic data and tax information.
- Saves all data in `trafficdata.txt` file.



## Limitations and Improvements
- **Testing**: The program hasn't been fully tested, so there may be bugs or unexpected behavior.
- **Improvements**: Further optimization and feature enhancements are possible.


## Purpose
This project is designed purely for educational purposes to learn **OOP concepts in C++**. It is not intended for real-world use and may require further refinement.


## License

> **This project is owned by [Muhammad Jawad Ahmad](https://www.linkedin.com/in/JawadAhmadCS/) and is not the property of any institution. Feel free to use it for educational purposes.**

