def pascal_to_atm(pascals):
    """
    Функция для перевода давления из паскалей в атмосферы.
    """
    atmospheres = pascals / 101325
    return atmospheres

# Пример использования функции
pascals = float(input("Введите давление в паскалях: "))
atmospheres = pascal_to_atm(pascals)
print(f"Давление в атмосферах: {atmospheres:.2f} атм")