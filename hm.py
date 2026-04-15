#2 vazifa 
class Employee:
    def __init__(self, name: str, employee_id: str, hourly_rate: float = 15.0) -> None:
        self.name = name
        self.employee_id = employee_id
        self.hourly_rate = hourly_rate
        self.__working_hours = []

    def log_hours(self, hour: int) -> bool:
        if 0 <= hour <= 24:
            self.__working_hours.append(hour)
            return True
        return False

    def total_hours(self) -> int:
        return sum(self.__working_hours)

    def calculate_salary(self) -> float:
        return self.total_hours() * self.hourly_rate

    def reset_hours(self) -> None:
        self.__working_hours.clear()


if __name__ == "__main__":
    employee = Employee("Javlon", "E101", hourly_rate=20.0)

    print(employee.log_hours(8))    
    print(employee.log_hours(9))    
    print(employee.log_hours(10))   
    print(employee.log_hours(25))   
    print(employee.total_hours())       
    print(employee.calculate_salary())  

    employee.reset_hours()
    print(employee.total_hours())       
    print(employee.calculate_salary())  



#1 vazifa 
class Student:
    def __init__(self, name: str, student_id: str) -> None:
        self.name = name
        self.student_id = student_id
        self.__grades = []

    def add_grade(self, grade: int) -> None:
        if 0 <= grade <= 100:
            self.__grades.append(grade)
        else:
            print("Xato: Noto'g'ri baho")

    def calculate_average(self) -> float:
        if not self.__grades:
            return 0.0
        return sum(self.__grades) / len(self.__grades)

    def get_status(self) -> str:
        avg = self.calculate_average()
        if 90 <= avg <= 100:
            return "A'lo"
        elif 80 <= avg <= 89:
            return "Yaxshi"
        elif 70 <= avg <= 79:
            return "Qoniqarli"
        else:
            return "Qoniqarsiz"


# Test (namuna)
if __name__ == "__main__":
    student = Student("Nodira", "S123")

    student.add_grade(85)
    student.add_grade(90)

    print(student.calculate_average())  
    print(student.get_status())      

    student.add_grade(150)       




#3 vazifa 
class Employee:
    def __init__(self, name: str, employee_id: str, hourly_rate: float = 15.0) -> None:
        self.name = name
        self.employee_id = employee_id
        self.hourly_rate = hourly_rate
        self.__working_hours = []

    def log_hours(self, hour: int) -> bool:
        if 0 <= hour <= 24:
            self.__working_hours.append(hour)
            return True
        return False

    def total_hours(self) -> int:
        return sum(self.__working_hours)

    def calculate_salary(self) -> float:
        return self.total_hours() * self.hourly_rate

    def reset_hours(self) -> None:
        self.__working_hours.clear()


class Student:
    def __init__(self, name: str, student_id: str) -> None:
        self.name = name
        self.student_id = student_id
        self.__grades = []

    def add_grade(self, grade: int) -> None:
        if 0 <= grade <= 100:
            self.__grades.append(grade)
        else:
            print("Xato: Noto'g'ri baho")

    def calculate_average(self) -> float:
        if not self.__grades:
            return 0.0
        return sum(self.__grades) / len(self.__grades)

    def get_status(self) -> str:
        avg = self.calculate_average()
        if 90 <= avg <= 100:
            return "A'lo"
        elif 80 <= avg <= 89:
            return "Yaxshi"
        elif 70 <= avg <= 79:
            return "Qoniqarli"
        else:
            return "Qoniqarsiz"