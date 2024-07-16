from kivy.app import App
from kivy.uix.label import Label

# based on OOP

class Myapp(App):
    def build(self):
        return Label(text="HELLO WORLD")

if __name__=="__main__":
    Myapp().run()