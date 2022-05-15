/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:16:42 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:16:43 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceInputBuffer(std::string& inputBuffer, const std::string& s1, const std::string& s2);

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Error argc" << std::endl;
        return (1);
    }

    std::ifstream inputStream;
    std::ofstream outputStream;
    const std::string fileInput = argv[1];
    std::string inputBuffer;
    const std::string fileOutput = fileInput + ".replace";
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];

    inputStream.open(fileInput,std::ofstream::in);
    if (!inputStream.is_open()) {
        std::cerr << "Error open fileInput" << std::endl;
        return (1);
    }
    outputStream.open(fileOutput, std::ofstream::trunc | std::ofstream::out);
    if (!outputStream.is_open()) {
        std::cerr << "Error open fileOutput" << std::endl;
        inputStream.close();
        return (1);
    }
    while(std::getline(inputStream, inputBuffer)) {
        replaceInputBuffer(inputBuffer, s1, s2);
        std::cout << inputBuffer << std::endl;
        outputStream << inputBuffer + "\n";
    }
    inputStream.close();
    outputStream.close();
}

void replaceInputBuffer(std::string& inputBuffer, const std::string& s1, const std::string& s2) {
    size_t s1Size = s1.size();
    size_t pos_find =  inputBuffer.find(s1);

    while (pos_find != std::string::npos) {
        inputBuffer.erase(pos_find, s1Size);
        inputBuffer.insert(pos_find, s2);
        pos_find = inputBuffer.find(s1);
    }
}
