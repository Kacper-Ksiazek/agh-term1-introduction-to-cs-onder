def silnia(n):
    result = 1
    for i in range(1, n + 1):
        result *= i

    return result


def wyraz_ciagu_silowo(n):
    return (2 ** (n - 2)) * (7 - n) / silnia(n - 1)


def wyraz_ciagu_rekurencyjnie(n):
    if n == 2:
        return 5
    if n == 8:
        return -(4 / 315)
    wyraz = (wyraz_ciagu_rekurencyjnie(n - 1) * 2 * (7 - n)) / ((n - 1) * (n - 8))

    return -1 * wyraz if wyraz > 0 and n > 8 else wyraz


for i in range(2, 20):
    print(
        f"""Kolejny wyraz dla n = {i} to:
    1. na prawde: {wyraz_ciagu_silowo(i)}
    2. rekurencyjnie: {wyraz_ciagu_rekurencyjnie(i)}
    \n
    """
    )
