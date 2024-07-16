# from kivy.app import App
# from kivy.uix.label import Label
# from kivy.uix.floatlayout import FloatLayout


# class myapp(App):
#     def build(self):
#         flyt=FloatLayout()
#         flyt1=Label(text='hello',size_hint=(1,0.2),pos_hint={'center_x':0.2, 'center_y':0.5})
#         flyt2=Label(text='world',size_hint=(0.3,1),pos_hint={'center_x':0.7,'center_y':0.6})
#         flyt.add_widget(flyt1)
#         flyt.add_widget(flyt2)
#         return flyt
        
# if __name__=='__main__':
#     myapp().run()

from kivy.app import App
from kivy.uix.label import Label
from kivy.uix.floatlayout import FloatLayout
from kivy.uix.button import Button

class myapp(App):
    def build(self):
        flyt=FloatLayout()
        flyt1=Button(text='hello',size_hint=(0.125,0.125),pos_hint={'center_x':0.2, 'center_y':0.5})
        flyt2=Button(text='world',size_hint=(0.5,0.5),pos_hint={'center_x':0.7,'center_y':0.6})
        flyt.add_widget(flyt1)
        flyt.add_widget(flyt2)
        return flyt
        
if __name__=='__main__':
    myapp().run()