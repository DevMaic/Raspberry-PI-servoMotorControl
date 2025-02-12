#include <stdio.h> //biblioteca padrão da linguagem C
#include "pico/stdlib.h" //subconjunto central de bibliotecas do SDK Pico
#include "hardware/pwm.h" //biblioteca para controlar o hardware de PWM
#define PWM_PIN 22 //pino do LED conectado a GPIO como PWM

//rotina principal
int main() {
    // Variáveis que serão usadas no while
    int activeCycle = 1638;
    bool isAdding = true;

    stdio_init_all(); //inicializa o sistema padrão de I/O
    gpio_set_function(PWM_PIN, GPIO_FUNC_PWM); //habilitar o pino GPIO como PWM
    uint slice = pwm_gpio_to_slice_num(PWM_PIN); //obter o canal PWM da GPIO
    pwm_set_clkdiv(slice, 38.1469); //define o divisor de clock do PWM
    pwm_set_wrap(slice, 65535); //definir o valor de wrap
    pwm_set_gpio_level(PWM_PIN, 7864); // 180 graus
    pwm_set_enabled(slice, true); //habilita o pwm no slice correspondente
    sleep_ms(5000);
    pwm_set_gpio_level(PWM_PIN, 4816); // 90 graus
    sleep_ms(5000);
    pwm_set_gpio_level(PWM_PIN, 1638); // 0 graus
    sleep_ms(5000);
   
    while (true) {
        // Define se devemos adicionar ou subtrair do ciclo ativo
        if(isAdding) {
            activeCycle += 16;
            pwm_set_gpio_level(PWM_PIN, activeCycle);
        } else {
            activeCycle -= 16;
            pwm_set_gpio_level(PWM_PIN, activeCycle);
        }

        // Define os limites do ciclo ativo
        if(activeCycle >= 7864) {
            isAdding = false;
        } else if(activeCycle <= 1638) {
            isAdding = true;
        }

        sleep_ms(10);
    }
}