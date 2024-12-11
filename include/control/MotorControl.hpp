
/**
 * @class MotorControl
 * @brief Classe para controlar um motor de passo usando pinos de controle.
 */
class MotorControl {
public:
    /**
     * @brief Construtor da classe MotorControl.
     * @param stepPin Pino para enviar pulsos de passo.
     * @param dirPin Pino para definir a direção do motor.
     * @param enablePin Pino para habilitar ou desabilitar o motor.
     */
    MotorControl(int stepPin, int dirPin, int enablePin);

    /**
     * @brief Habilita o motor.
     */
    void enable();

    /**
     * @brief Desabilita o motor.
     */
    void disable();

    /**
     * @brief Define a direção do motor.
     * @param direction Direção do motor (true para uma direção, false para a outra).
     */
    void setDirection(bool direction);

    /**
     * @brief Envia pulsos de passo para o motor.
     * @param steps Número de passos a serem dados pelo motor.
     */
    void step(int steps);

private:
    int stepPin; ///< Pino para enviar pulsos de passo.
    int dirPin; ///< Pino para definir a direção do motor.
    int enablePin; ///< Pino para habilitar ou desabilitar o motor.
    bool isEnabled; ///< Indica se o motor está habilitado.
    bool direction; //     /< Direção atual do motor.
};
