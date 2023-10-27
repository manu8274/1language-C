import kivy
from kivy.app import App
from kivy.uix.label import Label


class myapp(App): #dont need __init__ as inheriter takes place
    def build(self):
        return Label(text="hello world")

if __name__=="__main__":
    myapp().run() # no need for run as inheritor
