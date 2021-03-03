

#include <TFT_eSPI.h>       // Hardware-specific library

TFT_eSPI tft = TFT_eSPI();  // Invoke custom library

// Include the header files that contain the icons
#include "logo.h"

void tftSetup(void){
  tft.begin();
  tft.setRotation(1);	// landscape
  tft.fillScreen(TFT_BLACK);
  tft.setSwapBytes(true);   // Swap the colour byte order when rendering
  tft.pushImage(0, 0, logoWidth, logoHeight, ttgoLogo);   // Draw the logo
}
