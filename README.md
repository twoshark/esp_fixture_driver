# Esp Lighting Fixture Driver

Lighting Fixture Driver for the ESP8266 Microcontroller

<!-- markdownlint-disable MD001 -->

### Supported Inputs

<!-- markdownlint-enable MD001 -->

- Artnet
- Hosted File

### Input Values

The fixture expects the following config values from an input:

| Value     | Range |
| --------- | ----- |
| opacity   | 0-255 |
| animation | 0-5   |
| option    | 0-255 |
| speed     | 0-255 |
| strobe    | 0-255 |

### ArtNet Fixture

The ArtNet Input Mode expects 5 Chanels of DMX data

| <-- Start Channel \
| `Opacity` | `Animation` | `Option` | `Speed` | `Strobe` |

### Hosted File

The Hosted File Input 

```json
{
  "opacity": 255,
  "animation": 0,
  "option": 0,
  "speed": 0,
  "strobe": 0
}
```

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
