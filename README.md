# 🚀 Sistema de Irrigação Inteligente com ESP32 e MQTT (Simulado)

Este projeto simula um sistema de irrigação inteligente utilizando ESP32, MicroPython, um sensor de umidade (potenciômetro) e um módulo relé que representa uma bomba d'água. Agora o projeto possui conexão com Wi-Fi e comunicação MQTT funcionando corretamente.

## ✔️ Funcionalidades

- ✅ Lê a umidade do solo simulada com um potenciômetro.
- ✅ Aciona automaticamente a bomba (relé) quando o solo está seco.
- ✅ Publica dados de umidade no broker MQTT.
- ✅ Publica status da bomba (ligada/desligada) no broker MQTT.
- ✅ Dados são exibidos no terminal do Wokwi.
- ✅ Código escrito em MicroPython e simulado na plataforma Wokwi.

---

## 📡 Comunicação MQTT

- 🛰️ **Broker utilizado:** `broker.hivemq.com` (porta 1883 - público e gratuito)

### 🔗 **Tópicos utilizados:**
- **`edson/umidade`** → Publica dados da umidade do solo.
- **`edson/bomba`** → Publica o status da bomba (ligada/desligada).

---

## 🧠 Como Funciona

1. O sensor de umidade (simulado com potenciômetro) lê os dados do solo.
2. Se a umidade estiver **abaixo de 30%**, a bomba liga automaticamente.
3. Se a umidade estiver **igual ou acima de 30%**, a bomba permanece desligada.
4. O sistema publica:
   - Dados de umidade no tópico **`edson/umidade`**.
   - Status da bomba no tópico **`edson/bomba`**.
5. As informações podem ser visualizadas em tempo real no terminal do Wokwi ou utilizando um cliente MQTT, como [HiveMQ Web Client](https://www.hivemq.com/demos/websocket-client/).

---

## 🔌 Componentes Usados (Simulação no Wokwi)

- ESP32 (placa principal)
- Potenciômetro (simula sensor de umidade)
- Módulo Relé (simula bomba)
- Código em MicroPython (`main.py`)

---

## 🗺️ Circuito (Wokwi)

- Potenciômetro → A0 (GPIO36), GND, 5V
- Relé → Sinal: GPIO23, VCC: 5V, GND

---

## 💻 Código

O código atualizado com conexão Wi-Fi e MQTT está no arquivo **`main.py`** deste repositório.

---

## 🔗 Simulação no Wokwi

👉 [Acesse a simulação](https://wokwi.com/projects/429625709486787585)

---

## 🎥 Demonstração em Vídeo

👉 [Assista no YouTube](https://youtu.be/Mx8yYbpQopg?si=bhWTE6jdw4mN8kx-)

---

## 🧰 Lista de Materiais

| Item                         | Quantidade | Descrição                                        |
|------------------------------|------------|--------------------------------------------------|
| Placa ESP32                  | 1          | Plataforma microcontrolada para o controle geral |
| Potenciômetro (sensor)       | 1          | Simula a umidade do solo                         |
| Módulo Relé 5V               | 1          | Controla a bomba d’água                          |
| Protoboard                   | 1          | Montagem dos componentes eletrônicos             |
| Cabos jumpers                | Diversos   | Conexões entre os componentes                    |

---

## 👨‍💻 Autor

- **Edson Gustavo Silva Pereira – RA: 10408686**

