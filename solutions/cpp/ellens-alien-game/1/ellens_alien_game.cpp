namespace targets {
// TODO: Insert the code for the alien class here

class Alien {
    int health = 3;
public:
    int x_coordinate, y_coordinate;
    Alien(int x, int y) : x_coordinate(x), y_coordinate(y) {}
    int get_health() const {
        return health;
    }
    bool hit() {
        if(health > 0) health--;
        return true;
    }
    bool is_alive() const {
        return health > 0;
    }

    bool teleport(int x_new, int y_new) {
        x_coordinate = x_new;
        y_coordinate = y_new;
        return true;
    }

    bool collision_detection(Alien a) const {
        return (x_coordinate == a.x_coordinate && y_coordinate == a.y_coordinate);
    }



};

}  // namespace targets
