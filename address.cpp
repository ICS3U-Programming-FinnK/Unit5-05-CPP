// Created By: Finn Kitor
// Date: December 5th, 2023
// this program tells the user to input their address and
// it will tell them their address in uppercase

#include <iostream>
#include <string>

void format_address(const std::string& apartmentNumber = "", const std::string& streetNumber,
                    const std::string& streetName, const std::string& city,
                    const std::string& province, const std::string& postalCode) {
    // Format the address string
    std::string address = "ADDRESS PROGRAM\n";
    address += "APARTMENT NUMBER: " + apartmentNumber + "\n";
    address += "STREET NUMBER: " + streetNumber + "\n";
    address += "STREET NAME: " + streetName + "\n";
    address += "CITY: " + city + "\n";
    address += "PROVINCE: " + province + "\n";
    address += "POSTAL CODE: " + postalCode + "\n";

    // Print the formatted address
    std::cout << address;
}

int main() {
    // Get user input for the address components
    std::string apartmentNumber;
    std::string streetNumber;
    std::string streetName;
    std::string city;
    std::string province;
    std::string postalCode;

    std::cout << "Enter the apartment number (optional): ";
    std::getline(std::cin, apartmentNumber);

    std::cout << "Enter the street number: ";
    std::getline(std::cin, streetNumber);

    std::cout << "Enter the street name: ";
    std::getline(std::cin, streetName);

    std::cout << "Enter the city: ";
    std::getline(std::cin, city);

    std::cout << "Enter the province: ";
    std::getline(std::cin, province);

    std::cout << "Enter the postal code: ";
    std::getline(std::cin, postalCode);

    // Call the format_address function with the user input
    format_address(apartmentNumber, streetNumber, streetName, city, province, postalCode);

    return 0;
}
