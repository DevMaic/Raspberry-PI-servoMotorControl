<h1>
  <p align="center" width="100%">
    <img width="30%" src="https://softex.br/wp-content/uploads/2024/09/EmbarcaTech_logo_Azul-1030x428.png">
  </p>
</h1>

# ✨Tecnologias
Esse projeto foi desenvolvido com as seguintes tecnologias.
- Placa Raspberry Pi Pico W
- Raspberry Pi Pico SDK
- WokWi
- C/C++

# 💻Projeto
Projeto Desenvolvido durante o programa de capacitação profissional em microcontrolados e sistemas embarcados para estudantes de nível superior, polo Juazeiro-BA, na Universidade Federal do Vale do São Francisco (UNIVASF).

# 🚀Como rodar
### **Softwares Necessários**
1. **VS Code** com a extensão **Raspberry Pi Pico** instalada.
2. **CMake** e **Ninja** configurados.
3. **SDK do Raspberry Pi Pico** corretamente configurado.
4. Simulador **Wokwi** instalado e integrado ao VS Code.

### **Clonando o Repositório**
Para começar, clone o repositório no seu computador:
```bash
git clone https://github.com/DevMaic/Raspberry-PI-servoMotorControl
cd Raspberry-PI-servoMotorControl
```

---

## **Execução no Simulador Wokwi do VS Code**

### **1. Importar o Projeto**
Após clonar o repositório:
1. Abra o **VS Code**.
2. No menu **Raspberry Pi Pico**, selecione **Import Project**.
3. Escolha a pasta clonada e clique em **Import**.

### **2. Configurar o Simulador Wokwi**
1. Abra o arquivo `diagram.json` incluído no repositório.
2. Certifique-se de que o arquivo JSON está configurado corretamente para a simulação do hardware necessário:
   - Servo motor conectado no pino 22

### **3. Compilar o Código**
1. Clique no ícone **Raspberry Pi Pico** no lado esquerdo do VS Code.
2. Escolha a opção **Compile Project** para compilar o código.

### **4. Executar a Simulação**
1. Abra o painel do simulador Wokwi no VS Code.
2. Clique em **Play** para iniciar a simulação.

---


### **Execução na Placa BitDogLab**
#### **1. Coloque em Modo Reboot**
1. Mude o pino usado pra PWM do 22 para o 12 (LED azul)
2. Aperte o botão **BOOTSEL** no microcontrolador Raspberry Pi Pico W.
3. Ao mesmo tempo, aperte o botão de **Reset**.
#### **2. Upload de Arquivo `servoMotorControl.uf2`**
1. Abra a pasta `build` incluída no repositório.
2. Mova o arquivo `servoMotorControl.uf2` para a placa de desenvolvimento.
#### **3. Acompanhar Execução do Programa**
1. Observe o led Azul na placa BitDogLab, mudar de intensidade durante a alteração do ciclo ativo do PWM
   
---

### **Confira também uma apresentação do projeto**
<a href="https://youtu.be/zAgaWa8XVQo">Vídeo de apresentação</a>
