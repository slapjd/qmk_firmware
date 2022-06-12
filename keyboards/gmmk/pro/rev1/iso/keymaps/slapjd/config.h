#define USB_POLLING_INTERVAL_MS 1 // Default is 100Hz

#undef DEBOUNCE
#define DEBOUNCE 40 // with *_eager_pk debouncing, this effectively results in 1/2 the minimum ms between presses of the *same* key