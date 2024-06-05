from datetime import datetime

from entity.clinic import PetRecord
from repository.clinic_repository import PetRecordRepositoryList, PetRecordRepositoryXML


class Controller:
    def __init__(self, list_repository: PetRecordRepositoryList,
                 xml_repository: PetRecordRepositoryXML):
        self.list_repository = list_repository
        self.xml_repository = xml_repository

    def add_record(self, pet_record: PetRecord):
        self.list_repository.add_record(pet_record)

    def find_by_diagnosis(self, diagnosis: str, offset, limit):
        records = self.list_repository.find_by_diagnosis(diagnosis)
        result_records = []
        if limit * offset < len(records):
            for i in range(limit * offset, min(limit * (offset + 1), len(records))):
                result_records.append(records[i])
        return result_records

    def find_by_birth_and_name(self, value1, value2, offset, limit):
        records = self.list_repository.find_by_birth_and_name(value1, value2)
        result_records = []
        if limit * offset < len(records):
            for i in range(limit * offset, min(limit * (offset + 1), len(records))):
                result_records.append(records[i])
        return result_records

    def find_by_last_visit_and_vet(self, value1, value2, offset, limit):
        records = self.list_repository.find_by_last_visit_and_vet(value1, value2)
        result_records = []
        if limit * offset < len(records):
            for i in range(limit * offset, min(limit * (offset + 1), len(records))):
                result_records.append(records[i])
        return result_records

    def get_record_with_offset(self, offset, limit):
        result_records = []
        all_records = self.list_repository.get_all_records()
        if limit * offset < len(all_records):
            for i in range(limit * offset, min(limit * (offset + 1), len(all_records))):
                result_records.append(all_records[i])
        return result_records

    def delete_record_by_name_and_birth(self, name, birth_date):
        count_of_records = self.list_repository.delete_record_by_name_and_birth(name, birth_date)
        if count_of_records == 0:
            return "no records with this pattern were found"
        else:
            return f"{count_of_records} records have been deleted"

    def delete_record_by_last_visit_and_vet(self, last_visit, vet_name):
        count_of_records = self.list_repository.delete_by_last_visit_and_vet(last_visit, vet_name)
        if count_of_records == 0:
            return "no records with this pattern were found"
        else:
            return f"{count_of_records} records have been deleted"

    def delete_record_by_diagnosis(self, partial_diagnosis):
        count_of_records = self.list_repository.delete_by_diagnosis(partial_diagnosis)
        if count_of_records == 0:
            return "no records with this pattern were found"
        else:
            return f"{count_of_records} records have been deleted"

    def get_all_records(self):
        return self.list_repository.get_all_records()

    def get_all_records_by_diagnosis(self, diagnosis):
        return self.list_repository.find_by_diagnosis(diagnosis)

    def get_all_records_by_birth_and_name(self, value1, value2):
        return self.list_repository.find_by_birth_and_name(value1, value2)

    def get_all_records_by_last_visit_and_vet(self, value1, value2):
        return self.list_repository.find_by_last_visit_and_vet(value1, value2)


    def get_from_xml_file(self):
        records = self.xml_repository.read_from_xml("pet_records.xml")
        self.list_repository.records.extend(records)

    def write_to_xml_file(self):
        self.xml_repository.write_to_xml_file(self.list_repository.records, "pet_records.xml")
