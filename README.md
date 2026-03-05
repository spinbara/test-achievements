# Hurtworld Pluginy / Oxide Testy

To repo zawiera przykładowe pluginy i testy dla gry **Hurtworld** przy użyciu **Oxide**.  

## Struktura repozytorium
- `main.cpp` – testowy kod C++, symulacje komend i funkcji pluginów
- `plugins/` – folder z pluginami Oxide w C#
  - `plugin1.cs` – pierwszy plugin testowy
  - `plugin2.cs` – drugi plugin testowy
- `docs/` – dokumentacja i instrukcje użycia

## Funkcje testowe w `main.cpp`
- `testPlugin()` – wypisuje testowy komunikat w konsoli
- `setPlayerHealth(int health)` – przykładowa funkcja zmieniająca zdrowie gracza (symulacja)
- Możesz dodać własne funkcje do testowania różnych elementów gry

## Jak używać
1. Skompiluj `main.cpp` (np. za pomocą `g++ main.cpp -o testProgram`)
2. Uruchom program (`./testProgram`) – zobaczysz wyniki w konsoli
3. Pluginy w `plugins/` wrzuć do folderu Oxide w Hurtworld i przetestuj w grze

## Cele repo
- Testowanie funkcji C++ dla pluginów Hurtworld
- Udostępnianie gotowych przykładów Oxide pluginów
- Łatwe rozszerzanie o nowe funkcje i komendy
