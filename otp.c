#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OTP_LENGTH 6
#define CHAR_SET_SIZE 62

void generateOTP(char *otp) {
    const char charSet[CHAR_SET_SIZE] = 
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    
    srand(time(NULL));

    for (int i = 0; i < OTP_LENGTH; i++) {
        int randomIndex = rand() % CHAR_SET_SIZE;
        otp[i] = charSet[randomIndex];
    }
    otp[OTP_LENGTH] = '\0';
}

int main() {
    char otp[OTP_LENGTH + 1];
    generateOTP(otp);
    printf("Generated OTP: %s\n", otp);
    return 0;
}
