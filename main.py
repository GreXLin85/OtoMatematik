from math import sqrt
a = input("""
[*]Toplama # yapım aşamasında
[*]Çıkarma # yapım aşamasında
[*]Çarpma # yapım aşamasında
[*]Bölme # yapım aşamasında
[5]Çevre bulma (Çember)
[6]Eğim bulma
[7]Karekök 

[99]Program hakkında
[0]Programdan çık
>> """)

if(a == "0"):
  exit()
if(a == "99"):
  print("""
  Programı kodlayan
  Erol Umut 'GreXLin85' Atalay
  
  Kaynaklar
  http://www.matematikciler.com/8-sinif-egim-ve-dogrunun-egimi/
  http://www.matematiktutkusu.com/extra/iljijiljiljiljljiljil/cevre-formulleri.htm
  """)

if (a == "5"):
  pi = int(input("Pi : "))
  yari_cap = int(input("Yarı Çap : "))
  cevre = 2*pi*yari_cap
  print(cevre)
  print("""Yapılan işlem
2*pi*yarı çap""")
if(a == "6"):
  du = int(input("Dikey uzunluk : "))
  yu = int(input("Yatay uzunluk : "))
  egim = du/yu
  print("==========\nCevap : ",egim)
  print("""Yapılan işlem
m = dikey uzunluk/yatay uzunluk
""")
if (a == "7"):
	kk = int(input("Karekök bulunacak sayı : "))
	kkb = sqrt(kk)
	print(kkb)
