# Esp Pixel Driver

LED Pixel Driver for the ESP8266 Microcontroller

2 mode are available:

- 3 Channel Pixel Mapped LED Data
- 5 Channel DMX Fixture Configuration

Both may be enabled, but overlap in pins or DMX addresses will result in unpredictable behavoir.

<!-- markdownlint-disable MD001 -->

### Pixel Mapped Artnet Stream

<!-- markdownlint-enable MD001 -->

The pixel mapped artnet subscriber expects 3 channels of color data per pixel to be applied directly to particular leds.

### DMX Fixture

The DMX fixture expects 5 channels of data:

- opacity
- animation
- animation subselect
- speed
- strobe

## Configuration

Set the following values in `config.h` before uploading to your microcontroller.

| Parameter            | Variable      | Default           |
| -------------------- | ------------- | ----------------- |
| Output Mode          | OUTPUT_MODE   | OUTPUT_MODE_MOCK  |
| LED Max Strip Length | STRIP_LENGTH  | 16                |
| Data Source          | DATA_SOURCE   | DATA_SOURCE_ARNET |
| Fixture Count        | FIXTURE_COUNT | 1                 |

---

### DMX Configuration

| Parameter     | Variable     | Default |
| ------------- | ------------ | ------- |
| Universe Id   | DMX_UNIVERSE | 2       |
| Start Channel | DMX_OFFSET   | 0       |

---

### Server Configuration

| Parameter  | Variable      | Default                                       |
| ---------- | ------------- | --------------------------------------------- |
| Server URL | CONFIG_SERVER | "http://jsonplaceholder.typicode.com/users/1" |

---

### Pins

Select your gpio outputs by uncommenting and setting the pointer `pixels_fixture` in `esp_fixture_driver.ino`.

---

### Secret Config

Create `secret.h` at the root of the repo. `#define` the following values:

| Parameter         | Variable  |
| ----------------- | --------- |
| Wifi Network SSID | WIFI_SSID |
| Wifi Password     | PASSWORD  |

---
