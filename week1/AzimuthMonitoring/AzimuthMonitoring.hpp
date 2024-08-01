#pragma once
#include <string>
#include <vector>

class AzimuthMonitoring {
    public:
    int getAzimuth(std::vector<std::string> instructions) {
        int azimuth = 0;
        for (int i = 0; i < instructions.size(); i++) {
            if (instructions[i] == "LEFT") {
                azimuth = (azimuth + 270) % 360;
            }
            else if (instructions[i] == "RIGHT") {
                azimuth = (azimuth + 90) % 360;
            }
            else if (instructions[i] == "TURN AROUND") {
                azimuth = (azimuth + 180) % 360;
            }
            else if (instructions[i] == "HALT") {
                break;
            }
            else if (instructions[i].find("LEFT ") != std::string::npos) {
                azimuth = (azimuth + (360 - std::stoi(instructions[i].substr(5)))) % 360;
            }
            else if (instructions[i].find("RIGHT ") != std::string::npos) {
                azimuth = (azimuth + std::stoi(instructions[i].substr(6))) % 360;
            }
        }
        return azimuth;
    }
};