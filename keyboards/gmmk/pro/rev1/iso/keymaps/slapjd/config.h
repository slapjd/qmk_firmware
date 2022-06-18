// Higher Poll Rate
#define USB_POLLING_INTERVAL_MS 1

//Debounce time
//We use eager per-key so this is basically the minimum
//time between multiple presses of *the same* key
//this could be like 100 and we probably wouldn't give a shit
#undef DEBOUNCE
#define DEBOUNCE 40

//Neat RGB effex
#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_MATRIX_TYPING_HEATMAP_SLIM //Regular heatmap borked
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SPLASH
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
#endif