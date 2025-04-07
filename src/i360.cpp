#include <emscripten.h>
#include <cmath>

extern "C" {

// A basic function to simulate a calculation for i360 engine (e.g. angle normalization)
EMSCRIPTEN_KEEPALIVE
float normalize_angle(float angle) {
    float result = fmod(angle, 360.0f);
    if (result < 0) result += 360.0f;
    return result;
}

// Another function to add two values (example purpose)
EMSCRIPTEN_KEEPALIVE
int add(int a, int b) {
    return a + b;
}

}
