import network
import time
from umqtt.simple import MQTTClient
from machine import Pin, ADC

 ssid = 'Wokwi-GUEST'
password = ''

mqtt_server = 'broker.hivemq.com'
mqtt_port = 1883
client_id = 'esp32-irrigacao-edson'
topic_umidade = b'edson/umidade'
topic_bomba = b'edson/bomba'

sensor_umidade = ADC(Pin(34))
sensor_umidade.atten(ADC.ATTN_11DB)  

bomba = Pin(2, Pin.OUT)  

print('Conectando no Wi-Fi...')
wifi = network.WLAN(network.STA_IF)
wifi.active(True)
wifi.connect(ssid, password)

while not wifi.isconnected():
    print('.', end='')
    time.sleep(0.5)

print('\nConectado no Wi-Fi:', wifi.ifconfig())

print('Conectando ao broker MQTT...')
client = MQTTClient(client_id, mqtt_server, port=mqtt_port)
client.connect()
print('Conectado no MQTT broker')


while True:
    leitura = sensor_umidade.read()
    umidade = 100 - int((leitura / 4095) * 100)  

    print('Umidade do solo:', umidade, '%')

    client.publish(topic_umidade, str(umidade))
    print('Publicado no tópico', topic_umidade)

    
    if umidade < 30:
        bomba.value(1)  
        client.publish(topic_bomba, 'Bomba ligada')
        print('Bomba ligada')
    else:
        bomba.value(0)  
        client.publish(topic_bomba, 'Bomba desligada')
        print('Bomba desligada')

    time.sleep(5)
