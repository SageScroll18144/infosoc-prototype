import serial

class Leds:
    def __init__(self, name_port) -> None:
        self.port = serial.Serial(name_port, 9600)	

    def send_message(self, value):
        self.port.write(value.encode())
        self.port.flush()