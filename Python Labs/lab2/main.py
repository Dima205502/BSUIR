from controller.controller import Controller
from repository.clinic_repository import PetRecordRepositoryList, PetRecordRepositoryXML
from util.connection_manager import ConnectionManager
from view.view import View

if __name__ == "__main__":
    conn = ConnectionManager("veterinary_clinic.db")
    repository_list = PetRecordRepositoryList()
    repository_xml = PetRecordRepositoryXML()
    controller = Controller(repository_list, repository_xml)
    view = View(controller)
    view.start()
