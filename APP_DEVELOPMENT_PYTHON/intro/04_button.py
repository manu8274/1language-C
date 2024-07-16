# from kivy.app import App
# from kivy.uix.label import Label
# # from kivy.uix.floatlayout import FloatLayout
# from kivy.uix.boxlayout  import BoxLayout
# from kivy.uix.button import Button

# class lyt(BoxLayout):
#     def __init__(self):
#         super().__init__()
#         self.button=Button(text="press me")
#         self.button.bind(on_press=self.new_label)
#         self.add_widget(self.button)
        
#     def new_label(self,button):
#         self.label=Label(text='hello there')
#         self.add_widget(self.label)

# class myapp(App):
#     def build(self):
#         return lyt()
        
# if __name__=='__main__':
#     myapp().run()

from kivy.app import App
from kivy.uix.label import Label
# from kivy.uix.floatlayout import FloatLayout
from kivy.uix.boxlayout  import BoxLayout
from kivy.uix.button import Button

class lyt(BoxLayout):
    def __init__(self):
        super().__init__()
        self.button=Button(text="press me")
        self.button.bind(on_press=self.new_label)
        self.add_widget(self.button)
        
    def new_label(self,button):
        self.label=Label(text='hello there')
        self.add_widget(self.label)
        self.remove_widget(self.button) #to remove button ie only one press

class myapp(App):
    def build(self):
        return lyt()
        
if __name__=='__main__':
    myapp().run()