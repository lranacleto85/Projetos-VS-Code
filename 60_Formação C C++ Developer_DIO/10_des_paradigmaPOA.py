class ContaBancaria:
    def __init__(self, saldo):
        self.saldo = saldo

    def saque(self, valor):
        if self.saldo >= valor:
            self.saldo -= valor
        else:
            raise ValueError("Saldo insuficiente")

    def verifica_saldo(self, valor):
        if self.saldo >= valor:
            print(f"Saldo disponível: {self.saldo}")
        else:
            print(f"Saldo insuficiente: {self.saldo}")

def main():
    conta_corrente = ContaBancaria(1000)
    conta_poupanca = ContaBancaria(5000)

    try:
        conta_corrente.saque(500)
        conta_corrente.verifica_saldo(500)
        conta_poupanca.saque(6000)
        conta_poupanca.verifica_saldo(6000)
    except ValueError as e:
        print(e)

if __name__ == "__main__":
    main()
