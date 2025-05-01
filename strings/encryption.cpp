#include <iostream>
#include <string>

// code to encrypt and decrypt a message with a key
int main()
{
    std::string alphabet{" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY"};
    std::string key{"$93C!8*QPWOEIRUTYALSK@`74q^&1#0xvygbmdzkojescfalwtir"}; // must NOT have repeated characters

    std::cout << "enter message to encrypt: " << std::endl;
    std::string message;
    std::getline(std::cin, message); // get message from user to encrypt

    std::string encryptedMessage;
    for (char c : message) // iterate through message to get corresponding character from the key
    {
        size_t position{alphabet.find(c)};
        if (position != std::string::npos) // if a character is not found in the alphabet, add it as is
        {
            encryptedMessage += key.at(position);
        }
        else
        {
            encryptedMessage += c;
        }
    }

    std::cout << "encrypted message: " << encryptedMessage << std::endl;

    // decrypt message
    std::string decryptedMessage;
    for (char c : encryptedMessage)
    {
        size_t position{key.find(c)};
        if (position != std::string::npos)
        {
            decryptedMessage += alphabet.at(position);
        }
        else
        {
            decryptedMessage += c;
        }
    }

    std::cout << "decrypted message: " << decryptedMessage << std::endl;
    return 0;
}