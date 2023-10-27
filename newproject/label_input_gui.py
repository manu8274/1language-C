import kivy
from kivy.app import App
from kivy.uix.label import Label
from kivy.uix.gridlayout import GridLayout
from kivy.uix.textinput import TextInput


class mygrid(GridLayout):
    def __init__(self,**kwargs):
        super(mygrid,self).__init__(**kwargs)# calling a few parameters 
        self.cols=2
        self.add_widget(Label(text="firstName : "))
        self.firstname=TextInput(multiline = False)
        self.add_widget(self.firstname)

        self.add_widget(Label(text="lastName : "))
        self.lastname=TextInput(multiline = False)
        self.add_widget(self.lastname)

        self.add_widget(Label(text="age : "))
        self.age=TextInput(multiline = False)
        self.add_widget(self.age)



class myapp(App):
    def build(self):
        return mygrid() 

if __name__=="__main__":
    myapp().run()