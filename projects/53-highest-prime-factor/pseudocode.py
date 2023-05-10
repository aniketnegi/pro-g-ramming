# pseudocode in the best scripting lanuage python.

def factors(n: int) -> list:
    all_factors = []

    # should i start loop from 1 or 2?
    for i in range(1, int(n / 2) + 1):
        if n % i == 0 and i not in all_factors:
            all_factors += [i, int(n/i)]

    return all_factors


"""
MemoryError's for 600851475143
"""
# def sieve(n: int) -> list:
#     primes = [True] * (n+1)
#     primes[0] = primes[1] = False
#     for i in range(2, int(n**0.5)+1):
#         if primes[i]:
#             for j in range(i*i, n+1, i):
#                 primes[j] = False
#     return [p for p in range(n+1) if primes[p]]


def segmented_sieve(n):
    """
    Return a list of all prime numbers less than or equal to n, using a segmented version of the Sieve of Eratosthenes algorithm.

    Args:
        n (int): The upper limit of the range to check for prime numbers.

    Returns:
        list: A list of all prime numbers less than or equal to n.

    Raises:
        TypeError: If n is not an integer.
        ValueError: If n is less than 2.

    Example:
        >>> segmented_sieve(20)
        [2, 3, 5, 7, 11, 13, 17, 19]
    """
    if not isinstance(n, int):
        raise TypeError("n must be an integer")
    if n < 2:
        raise ValueError("n must be greater than or equal to 2")

    limit = int(n ** 0.5) + 1
    primes = [True] * limit
    prime_list = [2]

    for i in range(3, n+1, 2):
        if i <= limit and primes[i//2]:
            prime_list.append(i)
            for j in range(i*i, limit*2, i*2):
                primes[j//2] = False
        elif all(i % p for p in prime_list):
            prime_list.append(i)

    return prime_list


def main(n: int):
    primes = segmented_sieve(n)[::-1]
    factors_list = factors(n)

    for prime in primes:
        # print(f"dbg: {prime}")
        if prime in factors_list:
            print(f"Highest Prime factor is {prime}!")
            return


if __name__ == "__main__":
    n = int(input("Enter Number: "))
    main(n)
