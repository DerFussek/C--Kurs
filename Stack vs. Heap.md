# Stack
- Der normale Stapel-Speicher im Programm
- sehr schnelle Speicherzugriffe
- Begrenzte Größe (z.B. 8MB als Default)
- Allocation und Deallocation wird automatisch Geregelt
- Größen von Arrays müssen zur Compile-Time bekannt sein (Constant)

==> Für häufig genutze Daten nutzen

# Heap
- Größerer Speicherbereich im RAM
- Allocation und Deallocation muss vom Programmierer vorgegeben werden
  --> New und Delete Befehler dafür verwenden

==> Für sehr Große Datensätze den Heap verwenden

