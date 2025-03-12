from sympy import symbols, And, Or, Not, Implies, Equivalent
# A biblioteca SymPy nos ajuda a trabalhar simbolicamente com proposições: # Definindo variáveis proposicionais
P, Q, R = symbols('P Q R')
# Criando expressões lógicas
expr1 = And (P, Q)
expr2 = Or (P, Q)
expr3 = Not (P)
expr4 = Implies (P, Q)
#PAQ
#PvQ
# -P
#P+Q
#P↔ Q
expr5 = Equivalent (P, Q)
print("P ^ Q:", expr1)
print("P v Q:", expr2)

print("~P:", expr3)

print("P → Q:", expr4)
print("P → Q:", expr5)
