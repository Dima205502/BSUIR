from attraction import Attraction


class GeoMap:
    def __init__(self, coordinate_to_naming: dict):

        self.coordinate_to_naming = coordinate_to_naming

    def add_attraction(self, attraction: Attraction):

        coordinate = attraction.coordinate
        naming = attraction.naming

        if coordinate in self.coordinate_to_naming:
            print("Coordinate already exist")
            return

        if naming in self.coordinate_to_naming.values():
            print("Naming already exist")
            return

        self.coordinate_to_naming[coordinate] = naming

    def remove_attraction(self, attraction: Attraction):

        coordinate = attraction.coordinate

        if coordinate is not self.coordinate_to_naming:
            print("Such a place does not exist")
            return

        del self.coordinate_to_naming[coordinate]