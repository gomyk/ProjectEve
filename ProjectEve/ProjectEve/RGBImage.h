#pragma once
#include <libavformat/avformat.h>

typedef uint8_t u_char;


class RGBImage {
private:
	int width;
	int height;
	u_char *Rdata;
	u_char *Gdata;
	u_char *Bdata;
public:
	RGBImage();
	RGBImage(int width, int height);
	~RGBImage();
	void copyFrame(AVFrame* frame);
	bool checkPixelWhite(int index);
	void getPixelColor(u_char& R, u_char& G, u_char& B, int index);
	void setPixelColor(u_char R, u_char G, u_char B, int index);
	void RGB2YUV(AVFrame& frame);
};
