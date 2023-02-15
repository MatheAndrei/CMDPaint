#include "Paint.h"


int main() {
	COORD appSize = { 120, 60 };
	COORD fontSize = { 8, 8 };
	const wchar_t fontPath[] = L"resources/fonts/SquareMono.ttf";

	AddFontResource(fontPath);

	Paint paint;
	paint.Create(L"CMDPaint", appSize.X, appSize.Y, L"Square Mono", fontSize.X, fontSize.Y);
	paint.Start();

	RemoveFontResource(fontPath);

	return 0;
}