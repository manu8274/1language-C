# from kivy.app import App
# from kivy.uix.label import Label
# from kivy.uix.boxlayout import BoxLayout

# class myapp(App):
#     def build(self):
#         lyt=BoxLayout()
#         lyt1=Label(text='HELLO WORLD')
#         lyt2=Label(text='BUTTON 2')
#         lyt.add_widget(lyt1)
#         lyt.add_widget(lyt2)
#         return lyt
    
# if __name__=='__main__':
#     myapp().run()

# from kivy.app import App
# from kivy.uix.label import Label
# from kivy.uix.boxlayout import BoxLayout

# class myapp(App):
#     def build(self):
#         lyt=BoxLayout(orientation='vertical')
#         lyt1=Label(text='HELLO WORLD')
#         lyt2=Label(text='BUTTON 2')
#         lyt.add_widget(lyt1)
#         lyt.add_widget(lyt2)
#         return lyt
    
# if __name__=='__main__':
#     myapp().run()

################################################## import button
from kivy.app import App
from kivy.uix.label import Label
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.button import Button

class myapp(App):
    def build(self):
        lyt=BoxLayout(orientation='vertical') #create an instance of layout
        btn=Button(text='press') #instance of button
        lyt1=Label(text='HELLO WORLD')
        lyt2=Label(text='BUTTON 2')
        lyt.add_widget(lyt1)
        lyt.add_widget(lyt2)
        lyt.add_widget(btn)
        return lyt
    
if __name__=='__main__':
    myapp().run()