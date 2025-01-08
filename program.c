#include <stdbool.h>
#include <limits.h> // Pour INT_MAX et INT_MIN

bool isPalindrome(int x) {

    // Les nombres négatifs ne sont pas des palindromes

    if (x < 0) {
        return false;
    }

    int original = x;
    int inversed = 0;

    while (x > 0) {
        int lastNumber = x % 10; // Extraire le dernier chiffre

        // Vérifier si l'inversion causera un dépassement
        if (inversed > (INT_MAX - lastNumber) / 10) {
            return false;
        }

        inversed = inversed * 10 + lastNumber; // Construire le nombre inversé
        x /= 10; // Supprimer le dernier chiffre
    }

    return original == inversed; // Vérifier si l'inversé est égal à l'original
}