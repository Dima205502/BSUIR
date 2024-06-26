import unittest
import string
import random


from data_base import DateBase
from attraction import Attraction
from geo_coordinate import GeoCoordinate


class TestDateBase(unittest.TestCase):

    def setUp(self):
        self.attraction1 = Attraction("Eiffel Tower", GeoCoordinate(48.8582, 2.2945), 1889)
        self.attraction2 = Attraction("Statue of Liberty", GeoCoordinate(40.6892, 74.0445), 1886)

    def test_feedback_publication(self):
        text = ''.join(random.choices(string.ascii_uppercase + string.digits, k=100))
        DateBase.feedback_publication(self.attraction1, text)

        self.assertEqual(DateBase.attraction_to_feedback[self.attraction1], text)


if __name__ == '__main__':
    unittest.main()
