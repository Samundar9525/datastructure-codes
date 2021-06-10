class student:
   roll=0
   name=""
   std=0
   def detail(self):
       print(f"Roll.no   :{self.roll}\nName      :{self.name}\nclass     :{self.std} ")

sam=student()                           # creating object
rahul=student()                         # creating object

sam.name="samundar singh"
sam.roll=100
sam.std=10
print(sam.__dict__)                     #inbuilt function that print the data in a dictionary format
print("\n")
sam.detail()
