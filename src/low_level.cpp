#include <cpr/cpr.h>

#include <iostream>
#include <nlohmann/json.hpp>

int main() {
  // Effectuer une requête GET
  cpr::Response response =
      cpr::Get(cpr::Url{"https://jsonplaceholder.typicode.com/todos/1"});

  // Vérifier si la requête a réussi (code de statut 200)
  if (response.status_code == 200) {
    // Parser la réponse JSON
    nlohmann::json jsonData = nlohmann::json::parse(response.text);

    // Accéder aux données JSON
    std::string title = jsonData["title"];
    bool completed = jsonData["completed"];

    // Afficher les résultats
    std::cout << "Title: " << title << std::endl;
    std::cout << "Completed: " << (completed ? "true" : "false") << std::endl;
  } else {
    std::cerr << "Erreur lors de la requête GET. Code de statut : "
              << response.status_code << std::endl;
  }

  return 0;
}
