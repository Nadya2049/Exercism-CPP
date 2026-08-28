#include <string>
#include <vector>
#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.

std::vector<std::string> license_required() { return {"car", "truck"}; }
    
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    for(std::string vehicle : license_required()) { if(kind == vehicle) { return true; } }
    
    return false;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.

    //Vars

    //Best option text
    std::string best_option = "is clearly the better choice.";
    
    //Takes the length of each model's name
    int first_option_length = option1.length();
    int second_option_length = option2.length();
    
    //Search in order for each letter lexicographical order until the shortest word runs out of chars
    int shortest_model = std::min(first_option_length, second_option_length) - 1;
    
    for(int i = 0; i < shortest_model; i++) 
    { 
        if (option1[i] < option2[i]) { return option1 + " " + best_option; }
        
        if (option1[i] > option2[i]) { return option2 + " " + best_option; }
    }
    
    //Algorithm treat both option as equals so chooses first
    return (option1 + " " + best_option);
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    return 
        age < 3 ? original_price * 0.8 : 
        age < 10 ? original_price * 0.7 : 
        original_price * 0.5;
}

}  // namespace vehicle_purchase
