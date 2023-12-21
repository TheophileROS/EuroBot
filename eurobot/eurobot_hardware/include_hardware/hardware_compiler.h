// Ce code est un ensemble de directives de préprocesseur en langage C++ 
// qui définissent des macros pour gérer la visibilité des symboles lors 
// de la compilation d'une bibliothèque partagée sur des systèmes Linux 
// utilisant le compilateur GCC.

#ifndef __DEBICT_EUROBOT_HARDWARE__EUROBOT_HARDWARE_COMPILER_H__ // Protection contre l'inclusion multiple
#define __DEBICT_EUROBOT_HARDWARE__EUROBOT_HARDWARE_COMPILER_H__

// Définition de macros pour l'exportation et l'importation
#define DEBICT_EUROBOT_HARDWARE_EXPORT __attribute__((visibility("default")))
#define DEBICT_EUROBOT_HARDWARE_IMPORT

// Spécifie que les symboles doivent être visibles à l'extérieur de la bibliothèque (exportés).
#define DEBICT_EUROBOT_HARDWARE_PUBLIC __attribute__((visibility("default")))
// Spécifie que les symboles doivent être cachés (non visibles) en dehors de l'unité de compilation.
#define DEBICT_EUROBOT_HARDWARE_LOCAL __attribute__((visibility("hidden")))

#define DEBICT_EUROBOT_HARDWARE_PUBLIC_TYPE

#endif // __DEBICT_EUROBOT_HARDWARE__EUROBOT_HARDWARE_COMPILER_H__