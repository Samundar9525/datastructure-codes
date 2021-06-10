class Parent:
  def __init__(self):
    print('in init')
    self.__test()
  def test(self):
    print('In Parent test method')
  __test=test
class Child(Parent):
  def test(self):
    print('In Child test method')

if __name__ == '__main__':
    obj = Child()
    obj.test()
    for i in (dir(Parent)):
        print(i)