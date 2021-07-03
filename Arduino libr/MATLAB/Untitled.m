a = arduino('COM3','Uno','Libraries','Servo');
s = servo(a,'D7');
writePosition(s,0.1056)
position = readPosition(s)
R = rad2deg(position)