import unittest


from attraction import Attraction
from geo_map import GeoMap
from data_base import DateBase
from geo_coordinate import GeoCoordinate
from path import Path
from photo import Photo
from electronic_guide import ElectronicGuide


class TestElectronicGuide(unittest.TestCase):

    def setUp(self):
        attraction1 = Attraction("Eiffel Tower", GeoCoordinate(48.8582, 12.2945), 1889)
        attraction2 = Attraction("Statue of Liberty", GeoCoordinate(40.6892, 74.0445), 1886)
        list_of_attraction = [attraction1, attraction2]
        self.geomap = GeoMap(dict())
        self.electronic_guide = ElectronicGuide(list_of_attraction, GeoCoordinate(40.6892, 74.0445))

    def test_browsing_photo(self):
        photo = self.electronic_guide.browsing_photo("Eiffel Tower")
        self.assertIsInstance(photo, Photo)

    def test_get_information(self):
        information = self.electronic_guide.get_information("Eiffel Tower")
        self.assertIsInstance(information, str)



if __name__ == '__main__':
    unittest.main()