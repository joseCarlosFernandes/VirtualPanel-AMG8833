#include "VirtualPanel.h"
#include <Wire.h>
#include <Adafruit_AMG88xx.h>

uint16_t x = 0;
uint16_t y =0;


Adafruit_AMG88xx amg;

float pixelDaVez;

void setup() {
  Panel.begin();
  amg.begin();

}

void loop() {
  Panel.receive();

  float pixels[AMG88xx_PIXEL_ARRAY_SIZE];
  amg.readPixels(pixels);

  for (int i=0; i < AMG88xx_PIXEL_ARRAY_SIZE; i++){
          
          x = (i % 8) * 16;
          y = (i / 8) * 16;


          pixelDaVez = pixels[i - 1];
          if(pixelDaVez < 04.00){
              Panel.send(GraphDrawPixel, "$BLUE");
          }
          if(pixelDaVez > 00.00 && pixelDaVez < 22.00){
              Panel.send(GraphDrawPixel, "$GREEN");
          }
          if(pixelDaVez > 22.00 && pixelDaVez < 30.00){
            Panel.send(GraphDrawPixel, "$YELLOW");
          }
          if(pixelDaVez > 30.00 && pixelDaVez < 45.00){
            Panel.send(GraphDrawPixel, "$ORANGE");
          }
          if(pixelDaVez > 45.00){
            Panel.send(GraphDrawPixel, "$RED");
          }
          Panel.send(GraphDrawPixel, "$16PX");
          Panel.send(GraphDrawPixel, _Point(x, y));
  }
}

void PanelCallback(vp_channel event){
  
}