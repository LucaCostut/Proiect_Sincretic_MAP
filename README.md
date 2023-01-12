# Proiect Sincretic la Metode Avansate de Programare

Salut,

Ma numesc Costut Luca-Elisei,sunt anul II la Universitatea Politehnica Timisoara,in cadrul facultatii Automatica si calculatoare cu specializarea
Informatica.
Acesta va fi proiectul meu sincretic pentru semestrul 1 la disciplina optionala Metode Avansate de Programare.



# # Documentatie:


Problema cu N-Ture:

Dat fiind un tablou de șah NxN gol, plasați N ture pe tabla astfel încât două ture să nu se poată ataca reciproc.

Turul poate să se miște orizontal sau vertical în orice direcție, dar nu poate să se miște diagonal.

O soluție validă este aceea în care ture nu sunt în aceeași linie sau aceeași coloană.

Eu am rezolvat problema folosind backtracking,dar se poate rezolva în mai multe feluri.
Iată un plan al unui algoritm posibil pentru a rezolva problema:

Începeți cu prima linie a tabloului de șah.
Încercați să plasați o tură în prima coloană.
Verificați dacă plasarea turei este validă (adică nu există alte ture în aceeași linie sau coloană).
Dacă plasarea este validă, treceți la următoarea linie.
Dacă plasarea nu este validă, încercați următoarea coloană din linia curentă.
Repetați pașii 3-5 pentru toate linile.
Dacă toate N ture sunt plasate cu succes, soluția este găsită.
Dacă nu este posibil să se plaseze toate N ture, reveniți la linia anterioară și încercați o plasare diferită pentru tură în acea linie.
Acesta este doar un plan general, și există diferite modalități de a implementa acest algoritm în cod, inclusiv utilizarea funcției recursive, și de a menține piste de linii și coloane ocupate într-o structură de date separată (cum ar fi un set sau un array) pentru a verifica validitatea plasării mai repede.