from machine import Pin, ADC
from time import sleep
import neopixel

# Pinos do ESP32
sensor = ADC(Pin(36))           # Potenciômetro simula sensor de umidade
sensor.atten(ADC.ATTN_11DB)     # Para leitura até 3.3V (0-4095)

rele = Pin(23, Pin.OUT)         # Relé no GPIO23
np = neopixel.NeoPixel(Pin(22), 1)  # NeoPixel no GPIO22

# Limite para definir solo seco (abaixo) ou úmido (acima)
LIMITE_UMIDADE = 2000  # ajuste conforme necessário

while True:
    umidade = sensor.read()
    print("\n=============================")
    print(f"Umidade lida: {umidade}")

    if umidade < LIMITE_UMIDADE:
        print("Status: SOLO SECO")
        print("Bomba: LIGADA")
        rele.value(1)  # Liga o relé
        np[0] = (255, 0, 0)  # Vermelho
    else:
        print("Status: SOLO ÚMIDO")
        print("Bomba: DESLIGADA")
        rele.value(0)  # Desliga o relé
        np[0] = (0, 255, 0)  # Verde

    np.write()
    sleep(2)
