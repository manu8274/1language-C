import pyautogui as pg
import time
time.sleep(5)
for i in range(10):
    pg.typewrite("hello")
    pg.press("enter")