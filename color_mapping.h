#ifndef COLOR_MAPPING_H
#define COLOR_MAPPING_H
#define MAX_COLORPAIR_NAME_CHARS 16
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
#endif // COLOR_MAPPING_H