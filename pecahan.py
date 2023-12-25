# Membaca input
A, B = map(int, input().split())
C, D = map(int, input().split())

# Menghitung perkalian silang
nilai_A = A * D
nilai_C = C * B

# Membandingkan pecahan
if nilai_A == nilai_C:
    print("sama")
elif nilai_A > nilai_C:
    print("lebih besar")
else:
    print("lebih kecil")
