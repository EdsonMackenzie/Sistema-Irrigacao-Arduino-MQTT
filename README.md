# Sistema de Irrigação Inteligente com ESP32 e MQTT (Simulado)

Este projeto simula um sistema de irrigação inteligente usando ESP32, MicroPython, um sensor de umidade (potenciômetro), um LED NeoPixel e um módulo relé que representa uma bomba d'água.

## Funcionalidade
- Lê a umidade do solo simulada com um potenciômetro.
- Aciona automaticamente a bomba (relé) quando o solo está seco.
- Um LED NeoPixel indica o estado da irrigação:
  - Vermelho = bomba ligada (solo seco)
  - Verde = bomba desligada (solo úmido)
- Dados são exibidos no terminal do Wokwi.
- Código escrito em MicroPython e simulado na plataforma Wokwi.

## Componentes Usados (Simulação Wokwi)
- ESP32 (placa principal)
- Potenciômetro (simula sensor de umidade)
- Módulo Relé (simula bomba)
- LED NeoPixel
- Código em MicroPython (`main.py`)

## Circuito (Wokwi)
- Potenciômetro → A0 (GPIO36), GND, 5V
- NeoPixel → DIN: GPIO22, VCC: 5V, GND
- Relé → Sinal: GPIO23, VCC: 5V, GND

## Código
Veja o arquivo `main.py` neste repositório.

## Simulação no Wokwi
🔗 Acesse a simulação do circuito diretamente no Wokwi:  
[https://wokwi.com/projects/seulink]([https://wokwi.com/projects/seulink](https://wokwi.com/projects/429625709486787585))

## Demonstração em Vídeo
[🔗 Assista no YouTube](https://youtu.be/Mx8yYbpQopg?si=bhWTE6jdw4mN8kx-)

## Autores
- Edson Gustavo Silva Pereira – RA: 10408686
