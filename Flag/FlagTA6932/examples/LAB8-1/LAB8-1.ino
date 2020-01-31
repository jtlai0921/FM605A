#include <PCM.h>

const unsigned char sample[] PROGMEM = {音效資料};

void setup()
{
  startPlayback(sample, sizeof(sample));
}

void loop()
{
}

