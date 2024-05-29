# Рассчитаем вероятность того, что в группе из 60 человек хотя бы у двух совпадет день рождения.

### Шаги для решения задачи

1. **Обозначение**: 
   - \( n = 60 \) — количество людей.
   - \( d = 365 \) — количество дней в году (предполагаем, что год не високосный).

2. **Вероятность того, что у всех людей разные дни рождения**.

   Для первого человека вероятность иметь любой день рождения равна 1 (или 365/365).
   
   Для второго человека вероятность иметь день рождения, отличающийся от первого, равна 364/365.
   
   Для третьего человека вероятность иметь день рождения, отличающийся от первых двух, равна 363/365, и так далее.

   Общая вероятность того, что у всех 60 человек будут разные дни рождения, будет произведением этих вероятностей:

   \[
   P(\text{все разные}) = \frac{365}{365} \times \frac{364}{365} \times \frac{363}{365} \times \cdots \times \frac{365 - 59}{365}
   \]

3. **Перепишем произведение в виде факториала**:

   \[
   P(\text{все разные}) = \frac{365!}{(365 - 60)! \cdot 365^{60}}
   \]

4. **Вероятность того, что хотя бы у двух человек совпадут дни рождения**:

   Это дополнение к вероятности того, что у всех разные дни рождения:

   \[
   P(\text{совпадение}) = 1 - P(\text{все разные})
   \]

### Расчеты

Используем приближенную формулу для удобства расчетов:

\[
P(\text{все разные}) \approx \exp\left(-\frac{n(n-1)}{2d}\right)
\]

Подставим \( n = 60 \) и \( d = 365 \):

\[
P(\text{все разные}) \approx \exp\left(-\frac{60 \times 59}{2 \times 365}\right)
\]

\[
P(\text{все разные}) \approx \exp\left(-\frac{1770}{730}\right)
\]

\[
P(\text{все разные}) \approx \exp\left(-2.4247\right)
\]

\[
P(\text{все разные}) \approx 0.088
\]

### Вероятность совпадения:

\[
P(\text{совпадение}) = 1 - 0.088 \approx 0.912
\]

Таким образом, вероятность того, что в группе из 60 человек хотя бы у двух совпадет день рождения, составляет примерно 91.2%.
